import re
from pathlib import Path

file = Path("src/data/items.h")

text = file.read_text()

pattern = re.compile(
    r'(\[ITEM_TM_[A-Z0-9_]+\]\s*=\s*\{\s*'
    r'\.name\s*=\s*ITEM_NAME\(")TM\d+(".*?'
    r'\.description\s*=\s*COMPOUND_STRING\(\s*'
    r'"Teaches\\n"\s*'
    r'"([^"]+)\\n"\s*'
    r'"to a pokemon\.")',
    re.DOTALL
)

def replace(match):
    prefix = match.group(1)
    suffix = match.group(2)
    move_name = match.group(3)

    return f'{prefix}TM {move_name}{suffix}'

text, count = pattern.subn(replace, text)

file.write_text(text)

print(f"Changed {count} TM names.")