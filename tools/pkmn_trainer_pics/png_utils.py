"""Minimal, dependency-free PNG reader/writer for indexed (palette) images.

Only supports what's needed to crop a Pokemon anim_front.png (a 64x128
indexed PNG containing two stacked 64x64 animation frames) down to just
its first frame, while preserving the palette exactly (needed for
graphics_file_rules.mk's PNG -> .4bpp / .gbapal conversion to work).
"""

import struct
import zlib

PNG_SIGNATURE = b"\x89PNG\r\n\x1a\n"


class Png:
    def __init__(self, width, height, bit_depth, color_type, palette, trns, pixel_rows):
        self.width = width
        self.height = height
        self.bit_depth = bit_depth
        self.color_type = color_type
        self.palette = palette  # raw PLTE chunk bytes, or None
        self.trns = trns  # raw tRNS chunk bytes, or None
        self.pixel_rows = pixel_rows  # list of bytes, one fully unfiltered scanline each


def _read_chunks(data):
    pos = len(PNG_SIGNATURE)
    chunks = []
    while pos < len(data):
        length = struct.unpack(">I", data[pos:pos + 4])[0]
        ctype = data[pos + 4:pos + 8]
        cdata = data[pos + 8:pos + 8 + length]
        chunks.append((ctype, cdata))
        pos += 12 + length
    return chunks


def _paeth(a, b, c):
    p = a + b - c
    pa, pb, pc = abs(p - a), abs(p - b), abs(p - c)
    if pa <= pb and pa <= pc:
        return a
    if pb <= pc:
        return b
    return c


def _unfilter(raw, stride, height):
    rows = []
    prev = bytes(stride)
    pos = 0
    for _ in range(height):
        filt = raw[pos]
        line = bytearray(raw[pos + 1:pos + 1 + stride])
        pos += 1 + stride
        if filt == 0:
            pass
        elif filt == 1:  # Sub
            for i in range(stride):
                a = line[i - 1] if i >= 1 else 0
                line[i] = (line[i] + a) & 0xFF
        elif filt == 2:  # Up
            for i in range(stride):
                line[i] = (line[i] + prev[i]) & 0xFF
        elif filt == 3:  # Average
            for i in range(stride):
                a = line[i - 1] if i >= 1 else 0
                line[i] = (line[i] + ((a + prev[i]) >> 1)) & 0xFF
        elif filt == 4:  # Paeth
            for i in range(stride):
                a = line[i - 1] if i >= 1 else 0
                c = prev[i - 1] if i >= 1 else 0
                line[i] = (line[i] + _paeth(a, prev[i], c)) & 0xFF
        else:
            raise ValueError(f"Unsupported PNG filter type {filt}")
        rows.append(bytes(line))
        prev = line
    return rows


def read_indexed_png(path):
    with open(path, "rb") as f:
        data = f.read()
    if data[:8] != PNG_SIGNATURE:
        raise ValueError(f"{path} is not a PNG file")

    width = height = bit_depth = color_type = None
    palette = None
    trns = None
    idat = bytearray()
    for ctype, cdata in _read_chunks(data):
        if ctype == b"IHDR":
            width, height, bit_depth, color_type, comp, filt, inter = struct.unpack(">IIBBBBB", cdata)
            if comp != 0 or filt != 0 or inter != 0:
                raise ValueError(f"{path} uses an unsupported PNG encoding")
        elif ctype == b"PLTE":
            palette = cdata
        elif ctype == b"tRNS":
            trns = cdata
        elif ctype == b"IDAT":
            idat += cdata
        elif ctype == b"IEND":
            break

    if color_type != 3:
        raise ValueError(f"{path} is not an indexed (palette) PNG")

    stride = (width * bit_depth + 7) // 8
    raw = zlib.decompress(bytes(idat))
    rows = _unfilter(raw, stride, height)
    return Png(width, height, bit_depth, color_type, palette, trns, rows)


def write_indexed_png(png, path):
    stride = (png.width * png.bit_depth + 7) // 8
    raw = bytearray()
    for row in png.pixel_rows:
        raw.append(0)  # filter type None; the row is already unfiltered
        raw += row
    compressed = zlib.compress(bytes(raw), level=9)

    def chunk(ctype, cdata):
        out = struct.pack(">I", len(cdata)) + ctype + cdata
        out += struct.pack(">I", zlib.crc32(ctype + cdata) & 0xFFFFFFFF)
        return out

    ihdr = struct.pack(">IIBBBBB", png.width, png.height, png.bit_depth, png.color_type, 0, 0, 0)
    out = bytearray(PNG_SIGNATURE)
    out += chunk(b"IHDR", ihdr)
    if png.palette is not None:
        out += chunk(b"PLTE", png.palette)
    if png.trns is not None:
        out += chunk(b"tRNS", png.trns)
    out += chunk(b"IDAT", compressed)
    out += chunk(b"IEND", b"")
    with open(path, "wb") as f:
        f.write(out)


def crop_top_half(src_path, dst_path):
    """Crops an indexed PNG to just its top half (used to grab the first
    frame of a Pokemon anim_front.png, discarding the second animation
    frame stacked below it)."""
    png = read_indexed_png(src_path)
    if png.height % 2 != 0:
        raise ValueError(f"{src_path} has an odd height ({png.height}), can't split into two frames")
    half = png.height // 2
    cropped = Png(png.width, half, png.bit_depth, png.color_type, png.palette, png.trns, png.pixel_rows[:half])
    write_indexed_png(cropped, dst_path)
