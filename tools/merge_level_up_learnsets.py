import argparse
import pathlib
import re


ARRAY_RE = re.compile(
    r"(?P<header>static const struct LevelUpMove (?P<name>s\w+LevelUpLearnset)\[\] = \{\n)"
    r"(?P<body>.*?)"
    r"(?P<footer>\};)",
    re.DOTALL,
)
MOVE_RE = re.compile(r"^\s*LEVEL_UP_MOVE\(\s*(?P<level>\d+),\s*(?P<move>MOVE_\w+)\),\s*$")


def read_arrays(path):
    text = path.read_text()
    arrays = {}
    for match in ARRAY_RE.finditer(text):
        moves = []
        for line in match.group("body").splitlines():
            move_match = MOVE_RE.match(line)
            if move_match:
                moves.append((move_match.group("move"), int(move_match.group("level"))))
        arrays[match.group("name")] = moves
    return text, arrays


def merged_arrays(paths):
    merged = {}
    for generation, path in enumerate(paths, start=1):
        _, arrays = read_arrays(path)
        for name, moves in arrays.items():
            selected = merged.setdefault(name, {})
            for order, (move, level) in enumerate(moves):
                selected[move] = (level, generation, order)
    return merged


def merge_file(target, sources):
    text, target_arrays = read_arrays(target)
    merged = merged_arrays(sources)

    if set(target_arrays) != set(merged):
        missing = sorted(set(merged) - set(target_arrays))
        extra = sorted(set(target_arrays) - set(merged))
        raise RuntimeError(f"array mismatch: missing={missing}, extra={extra}")

    def replace_array(match):
        moves = sorted(merged[match.group("name")].items(), key=lambda item: (item[1][0], item[1][1], item[1][2]))
        body = "".join(f"    LEVEL_UP_MOVE({level:2d}, {move}),\n" for move, (level, _, _) in moves)
        body += "    LEVEL_UP_END\n"
        return match.group("header") + body + match.group("footer")

    return ARRAY_RE.sub(replace_array, text)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--check", action="store_true")
    args = parser.parse_args()

    root = pathlib.Path(__file__).resolve().parents[1]
    directory = root / "src/data/pokemon/level_up_learnsets"
    sources = [directory / f"gen_{generation}.h" for generation in range(1, 10)]
    target = sources[-1]
    merged_text = merge_file(target, sources)

    if args.check:
        if merged_text == target.read_text():
            print("gen_9.h is already consolidated")
        else:
            print("gen_9.h requires consolidation")
        return

    target.write_text(merged_text)


if __name__ == "__main__":
    main()