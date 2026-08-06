import json
import re
import threading
import time
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path
from urllib.parse import parse_qs, urlparse

ROOT_DIR = Path(__file__).resolve().parents[2]
SPECIES_INFO_DIR = ROOT_DIR / "src" / "data" / "pokemon" / "species_info"
ABILITIES_FILE = ROOT_DIR / "include" / "constants" / "abilities.h"
POKEMON_GFX_TABLE_FILE = ROOT_DIR / "src" / "data" / "graphics" / "pokemon.h"
PUBLIC_DIR = Path(__file__).resolve().parent / "public"
HOST = "127.0.0.1"
PORT = 5179
ICON_SYMBOL_MAP_CACHE: dict[str, str] | None = None
AUTO_EXIT_ENABLED = False
AUTO_EXIT_IDLE_SECONDS = 20
LAST_CLIENT_ACTIVITY = time.monotonic()


def note_client_activity() -> None:
    global LAST_CLIENT_ACTIVITY
    LAST_CLIENT_ACTIVITY = time.monotonic()


def start_auto_shutdown_watcher(httpd: ThreadingHTTPServer) -> threading.Thread:
    def _watcher() -> None:
        while True:
            time.sleep(1.0)
            if not AUTO_EXIT_ENABLED:
                continue
            if time.monotonic() - LAST_CLIENT_ACTIVITY >= AUTO_EXIT_IDLE_SECONDS:
                httpd.shutdown()
                return

    thread = threading.Thread(target=_watcher, daemon=True)
    thread.start()
    return thread


def read_text_raw(path: Path) -> str:
    with path.open("r", encoding="utf-8", newline="") as f:
        return f.read()


def write_text_raw(path: Path, text: str) -> None:
    with path.open("w", encoding="utf-8", newline="") as f:
        f.write(text)


def get_families_files() -> list[str]:
    files = [p.name for p in SPECIES_INFO_DIR.glob("gen_*_families.h")]

    def gen_num(name: str) -> int:
        match = re.search(r"gen_(\d+)_", name)
        return int(match.group(1)) if match else 0

    return sorted(files, key=gen_num)


def resolve_families_file(file_name: str) -> Path | None:
    if not re.fullmatch(r"[a-zA-Z0-9_\-]+\.h", file_name):
        return None
    candidate = (SPECIES_INFO_DIR / file_name).resolve()
    if SPECIES_INFO_DIR.resolve() not in candidate.parents:
        return None
    if not candidate.exists():
        return None
    return candidate


def parse_abilities() -> list[str]:
    text = read_text_raw(ABILITIES_FILE)
    # Parse ability constants in a syntax-agnostic way so enum/define styles both work.
    tokens = re.findall(r"\bABILITY_[A-Z0-9_]+\b", text)
    out: list[str] = []
    for ability in tokens:
        if ability not in out:
            out.append(ability)
    return out


def parse_icon_symbol_map() -> dict[str, str]:
    global ICON_SYMBOL_MAP_CACHE
    if ICON_SYMBOL_MAP_CACHE is not None:
        return ICON_SYMBOL_MAP_CACHE

    text = read_text_raw(POKEMON_GFX_TABLE_FILE)
    icon_map: dict[str, str] = {}

    # Prefer the first declaration for a symbol so we consistently use one icon path.
    for match in re.finditer(
        r"const\s+u8\s+(gMonIcon_[A-Za-z0-9_]+)\[\]\s*=\s*INCBIN_U8\(\"([^\"]+)\"\)",
        text,
    ):
        symbol = match.group(1)
        source_rel = match.group(2)
        if symbol in icon_map:
            continue

        # Convert source .4bpp path to displayable PNG path in the same directory.
        png_rel = source_rel.replace(".4bpp", ".png")
        png_path = ROOT_DIR / png_rel
        if png_path.exists():
            icon_map[symbol] = png_rel.replace("\\", "/")

    ICON_SYMBOL_MAP_CACHE = icon_map
    return ICON_SYMBOL_MAP_CACHE


def find_matching_brace(text: str, open_index: int) -> int:
    depth = 0
    in_string = False
    quote = ""

    for i in range(open_index, len(text)):
        ch = text[i]
        prev = text[i - 1] if i > 0 else ""

        if in_string:
            if ch == quote and prev != "\\":
                in_string = False
                quote = ""
            continue

        if ch in ('"', "'"):
            in_string = True
            quote = ch
            continue

        if ch == "{":
            depth += 1
        elif ch == "}":
            depth -= 1
            if depth == 0:
                return i

    return -1


def find_field_token_index(block: str, field_name: str) -> int:
    match = re.search(rf"\.{re.escape(field_name)}\s*=", block)
    return match.start() if match else -1


def extract_field_expression(block: str, field_name: str) -> str | None:
    token_idx = find_field_token_index(block, field_name)
    if token_idx == -1:
        return None

    eq_idx = block.find("=", token_idx)
    if eq_idx == -1:
        return None

    i = eq_idx + 1
    while i < len(block) and block[i].isspace():
        i += 1

    start = i
    paren_depth = 0
    brace_depth = 0
    bracket_depth = 0
    in_string = False
    quote = ""

    while i < len(block):
        ch = block[i]
        prev = block[i - 1] if i > 0 else ""

        if in_string:
            if ch == quote and prev != "\\":
                in_string = False
                quote = ""
            i += 1
            continue

        if ch in ('"', "'"):
            in_string = True
            quote = ch
            i += 1
            continue

        if ch == "(":
            paren_depth += 1
        elif ch == ")":
            paren_depth -= 1
        elif ch == "{":
            brace_depth += 1
        elif ch == "}":
            brace_depth -= 1
        elif ch == "[":
            bracket_depth += 1
        elif ch == "]":
            bracket_depth -= 1
        elif ch == "," and paren_depth == 0 and brace_depth == 0 and bracket_depth == 0:
            return block[start:i].strip()

        i += 1

    return None


def find_field_expression_span(block: str, field_name: str) -> tuple[int, int] | None:
    token_idx = find_field_token_index(block, field_name)
    if token_idx == -1:
        return None

    eq_idx = block.find("=", token_idx)
    if eq_idx == -1:
        return None

    i = eq_idx + 1
    while i < len(block) and block[i].isspace():
        i += 1

    start = i
    paren_depth = 0
    brace_depth = 0
    bracket_depth = 0
    in_string = False
    quote = ""

    while i < len(block):
        ch = block[i]
        prev = block[i - 1] if i > 0 else ""

        if in_string:
            if ch == quote and prev != "\\":
                in_string = False
                quote = ""
            i += 1
            continue

        if ch in ('"', "'"):
            in_string = True
            quote = ch
            i += 1
            continue

        if ch == "(":
            paren_depth += 1
        elif ch == ")":
            paren_depth -= 1
        elif ch == "{":
            brace_depth += 1
        elif ch == "}":
            brace_depth -= 1
        elif ch == "[":
            bracket_depth += 1
        elif ch == "]":
            bracket_depth -= 1
        elif ch == "," and paren_depth == 0 and brace_depth == 0 and bracket_depth == 0:
            return (start, i)

        i += 1

    return None


def split_comma_values(value: str) -> list[str]:
    return [v.strip() for v in value.split(",") if v.strip()]


def parse_species_file(file_text: str) -> list[dict]:
    species = []
    icon_symbol_map = parse_icon_symbol_map()

    for match in re.finditer(r"\[(SPECIES_[A-Z0-9_]+)\]\s*=\s*\{", file_text):
        species_id = match.group(1)
        entry_start = match.start()
        brace_open = file_text.find("{", entry_start)
        if brace_open == -1:
            continue

        brace_close = find_matching_brace(file_text, brace_open)
        if brace_close == -1:
            continue

        block = file_text[brace_open + 1:brace_close]

        name_match = re.search(r"\.speciesName\s*=\s*_\(\"([^\"]+)\"\)", block)
        species_name = name_match.group(1) if name_match else species_id.removeprefix("SPECIES_")

        stat_fields = ["baseHP", "baseAttack", "baseDefense", "baseSpeed", "baseSpAttack", "baseSpDefense"]
        stats = {field: extract_field_expression(block, field) or "" for field in stat_fields}

        abilities_expr = extract_field_expression(block, "abilities") or ""
        abilities_body = re.sub(r"^\{\s*|\s*\}$", "", abilities_expr.strip()) if abilities_expr.startswith("{") else ""
        abilities = split_comma_values(abilities_body)

        innates_expr = extract_field_expression(block, "innates") or ""
        innates_body = re.sub(r"^\{\s*|\s*\}$", "", innates_expr.strip()) if innates_expr.startswith("{") else ""
        innates = split_comma_values(innates_body)

        evolutions = extract_field_expression(block, "evolutions") or ""
        icon_symbol = extract_field_expression(block, "iconSprite") or ""
        icon_path = icon_symbol_map.get(icon_symbol, "")

        species.append({
            "id": species_id,
            "name": species_name,
            "stats": stats,
            "abilities": abilities,
            "innates": innates,
            "evolutions": evolutions,
            "iconSymbol": icon_symbol,
            "iconPath": icon_path,
            "_span": {
                "entry_start": entry_start,
                "brace_open": brace_open,
                "brace_close": brace_close,
            },
        })

    return species


def set_field_expression(block: str, field_name: str, expression: str) -> str:
    span = find_field_expression_span(block, field_name)
    if span is None:
        return block
    start, end = span
    return block[:start] + expression + block[end:]


def remove_field_line(block: str, field_name: str) -> str:
    token_idx = find_field_token_index(block, field_name)
    if token_idx == -1:
        return block

    span = find_field_expression_span(block, field_name)
    if span is None:
        return block

    _, expr_end = span
    line_start = block.rfind("\n", 0, token_idx)
    line_start = 0 if line_start == -1 else line_start + 1

    line_end = block.find("\n", expr_end)
    if line_end == -1:
        line_end = len(block)
    else:
        line_end += 1

    return block[:line_start] + block[line_end:]


def insert_field_after(block: str, after_field_name: str, field_name: str, expression: str) -> str:
    anchor = re.search(rf"^\s*\.{re.escape(after_field_name)}\s*=.*$,?", block, flags=re.MULTILINE)
    if not anchor:
        return block

    line = anchor.group(0)
    indent_match = re.match(r"^\s*", line)
    indent = indent_match.group(0) if indent_match else "        "
    newline = "\r\n" if "\r\n" in block else "\n"

    insertion = f"{newline}{indent}.{field_name} = {expression},"
    insert_pos = anchor.end()
    return block[:insert_pos] + insertion + block[insert_pos:]


def apply_updates(file_text: str, species_id: str, updates: dict) -> str:
    parsed = parse_species_file(file_text)
    target = next((s for s in parsed if s["id"] == species_id), None)
    if not target:
        raise ValueError(f"Species not found: {species_id}")

    brace_open = target["_span"]["brace_open"]
    brace_close = target["_span"]["brace_close"]
    block = file_text[brace_open + 1:brace_close]

    for stat_field in ["baseHP", "baseAttack", "baseDefense", "baseSpeed", "baseSpAttack", "baseSpDefense"]:
        if "stats" in updates and stat_field in updates["stats"]:
            value = (updates["stats"].get(stat_field) or "").strip()
            block = set_field_expression(block, stat_field, value)

    if isinstance(updates.get("abilities"), list):
        slots = [
            (updates["abilities"][0] if len(updates["abilities"]) > 0 else "ABILITY_NONE") or "ABILITY_NONE",
            (updates["abilities"][1] if len(updates["abilities"]) > 1 else "ABILITY_NONE") or "ABILITY_NONE",
            (updates["abilities"][2] if len(updates["abilities"]) > 2 else "ABILITY_NONE") or "ABILITY_NONE",
        ]
        slots = [s.strip() if s.strip() else "ABILITY_NONE" for s in slots]
        ability_expr = "{ " + ", ".join(slots) + " }"

        if find_field_expression_span(block, "abilities") is None:
            block = insert_field_after(block, "eggGroups", "abilities", ability_expr)
        else:
            block = set_field_expression(block, "abilities", ability_expr)

    if isinstance(updates.get("innates"), list):
        innates = [i.strip() for i in updates["innates"] if (i or "").strip()]
        if not innates:
            block = remove_field_line(block, "innates")
        else:
            innate_expr = "{ " + ", ".join(innates) + " }"
            if find_field_expression_span(block, "innates") is None:
                block = insert_field_after(block, "abilities", "innates", innate_expr)
            else:
                block = set_field_expression(block, "innates", innate_expr)

    if "evolutions" in updates:
        evo_expr = (updates.get("evolutions") or "").strip().rstrip(",")
        if not evo_expr:
            block = remove_field_line(block, "evolutions")
        else:
            if find_field_expression_span(block, "evolutions") is None:
                block = insert_field_after(block, "levelUpLearnset", "evolutions", evo_expr)
            else:
                block = set_field_expression(block, "evolutions", evo_expr)

    return file_text[:brace_open + 1] + block + file_text[brace_close:]


class SpeciesEditorHandler(BaseHTTPRequestHandler):
    def _send_json(self, status: int, payload: dict) -> None:
        body = json.dumps(payload).encode("utf-8")
        self.send_response(status)
        self.send_header("Content-Type", "application/json; charset=utf-8")
        self.send_header("Cache-Control", "no-store")
        self.send_header("Content-Length", str(len(body)))
        self.end_headers()
        self.wfile.write(body)

    def _send_bytes(self, status: int, body: bytes, content_type: str) -> None:
        self.send_response(status)
        self.send_header("Content-Type", content_type)
        self.send_header("Cache-Control", "no-store")
        self.send_header("Content-Length", str(len(body)))
        self.end_headers()
        self.wfile.write(body)

    def _serve_static(self, path_name: str) -> None:
        if path_name.startswith("/assets/"):
            rel = path_name.removeprefix("/assets/")
            target = (ROOT_DIR / rel).resolve()
            if ROOT_DIR.resolve() not in target.parents:
                self._send_bytes(404, b"Not found", "text/plain; charset=utf-8")
                return
            if not target.exists() or target.is_dir():
                self._send_bytes(404, b"Not found", "text/plain; charset=utf-8")
                return

            ext_map = {
                ".png": "image/png",
                ".jpg": "image/jpeg",
                ".jpeg": "image/jpeg",
                ".webp": "image/webp",
                ".gif": "image/gif",
            }
            content_type = ext_map.get(target.suffix.lower(), "application/octet-stream")
            self._send_bytes(200, target.read_bytes(), content_type)
            return

        rel = "index.html" if path_name == "/" else path_name.lstrip("/")
        target = (PUBLIC_DIR / rel).resolve()

        if PUBLIC_DIR.resolve() not in target.parents and target != PUBLIC_DIR.resolve() / "index.html":
            self._send_bytes(404, b"Not found", "text/plain; charset=utf-8")
            return

        if not target.exists() or target.is_dir():
            self._send_bytes(404, b"Not found", "text/plain; charset=utf-8")
            return

        ext_map = {
            ".html": "text/html; charset=utf-8",
            ".css": "text/css; charset=utf-8",
            ".js": "application/javascript; charset=utf-8",
            ".json": "application/json; charset=utf-8",
        }
        content_type = ext_map.get(target.suffix.lower(), "application/octet-stream")
        self._send_bytes(200, target.read_bytes(), content_type)

    def do_GET(self):
        try:
            parsed = urlparse(self.path)
            path_name = parsed.path
            note_client_activity()

            if path_name == "/api/files":
                self._send_json(200, {"files": get_families_files()})
                return

            if path_name == "/api/heartbeat":
                self._send_json(200, {"ok": True})
                return

            if path_name == "/api/abilities":
                self._send_json(200, {"abilities": parse_abilities()})
                return

            if path_name == "/api/species":
                query = parse_qs(parsed.query)
                file_name = query.get("file", [""])[0]
                if not file_name:
                    self._send_json(400, {"error": "Missing file query parameter"})
                    return

                file_path = resolve_families_file(file_name)
                if not file_path:
                    self._send_json(404, {"error": "File not found"})
                    return

                text = read_text_raw(file_path)
                species = parse_species_file(text)
                species_out = [
                    {
                        "id": s["id"],
                        "name": s["name"],
                        "stats": s["stats"],
                        "abilities": s["abilities"],
                        "innates": s["innates"],
                        "evolutions": s["evolutions"],
                        "iconSymbol": s["iconSymbol"],
                        "iconPath": s["iconPath"],
                    }
                    for s in species
                ]
                self._send_json(200, {"species": species_out})
                return

            self._serve_static(path_name)
        except Exception as exc:
            self._send_json(500, {"error": str(exc)})

    def do_POST(self):
        try:
            parsed = urlparse(self.path)
            note_client_activity()
            if parsed.path != "/api/save":
                self._send_json(404, {"error": "Unknown API route"})
                return

            content_length = int(self.headers.get("Content-Length", "0"))
            if content_length > 2 * 1024 * 1024:
                self._send_json(400, {"error": "Request body too large"})
                return

            raw = self.rfile.read(content_length)
            try:
                payload = json.loads(raw.decode("utf-8") if raw else "{}")
            except Exception:
                self._send_json(400, {"error": "Invalid JSON body"})
                return

            file_name = payload.get("file")
            species_id = payload.get("species")
            updates = payload.get("updates", {})

            if not file_name or not species_id:
                self._send_json(400, {"error": "Missing file or species in payload"})
                return

            file_path = resolve_families_file(file_name)
            if not file_path:
                self._send_json(404, {"error": "File not found"})
                return

            original_text = read_text_raw(file_path)
            backup_path = Path(str(file_path) + ".bak")
            if not backup_path.exists():
                write_text_raw(backup_path, original_text)

            updated_text = apply_updates(original_text, species_id, updates)
            write_text_raw(file_path, updated_text)

            rel_backup = backup_path.relative_to(ROOT_DIR).as_posix()
            self._send_json(200, {"ok": True, "backupPath": rel_backup})
        except Exception as exc:
            self._send_json(500, {"error": str(exc)})


def run_server() -> None:
    server = ThreadingHTTPServer((HOST, PORT), SpeciesEditorHandler)
    start_auto_shutdown_watcher(server)
    print(f"Species editor running at http://{HOST}:{PORT}")
    server.serve_forever()


if __name__ == "__main__":
    run_server()
