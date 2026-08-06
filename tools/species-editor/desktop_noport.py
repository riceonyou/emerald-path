import sys
from pathlib import Path

import webview

import server


def is_repo_root(path: Path) -> bool:
    return (
        (path / "src" / "data" / "pokemon" / "species_info").exists()
        and (path / "include" / "constants" / "abilities.h").exists()
        and (path / "src" / "data" / "graphics" / "pokemon.h").exists()
    )


def detect_repo_root() -> Path:
    candidates = []

    exe_dir = Path(sys.executable).resolve().parent
    cwd = Path.cwd().resolve()
    script_dir = Path(__file__).resolve().parent

    candidates.extend([cwd, exe_dir, script_dir])

    for base in [cwd, exe_dir, script_dir]:
        current = base
        for _ in range(8):
            candidates.append(current)
            if current.parent == current:
                break
            current = current.parent

    seen = set()
    for candidate in candidates:
        key = str(candidate)
        if key in seen:
            continue
        seen.add(key)
        if is_repo_root(candidate):
            return candidate

    raise RuntimeError(
        "Could not locate repository root. Expected folders like src/data/pokemon/species_info and include/constants/abilities.h."
    )


def configure_server_paths(repo_root: Path) -> None:
    server.ROOT_DIR = repo_root
    server.SPECIES_INFO_DIR = repo_root / "src" / "data" / "pokemon" / "species_info"
    server.ABILITIES_FILE = repo_root / "include" / "constants" / "abilities.h"
    server.POKEMON_GFX_TABLE_FILE = repo_root / "src" / "data" / "graphics" / "pokemon.h"
    server.ICON_SYMBOL_MAP_CACHE = None


class EditorApi:
    def get_mode(self):
        return "desktop"

    def get_files(self):
        return {"files": server.get_families_files()}

    def get_abilities(self):
        return {"abilities": server.parse_abilities()}

    def get_species(self, file_name: str):
        file_path = server.resolve_families_file(file_name)
        if not file_path:
            return {"error": "File not found"}

        text = server.read_text_raw(file_path)
        species = server.parse_species_file(text)
        output = []
        for entry in species:
            icon_url = ""
            icon_path = entry.get("iconPath", "")
            if icon_path:
                full_icon = (server.ROOT_DIR / icon_path).resolve()
                if full_icon.exists():
                    icon_url = full_icon.as_uri()

            output.append(
                {
                    "id": entry["id"],
                    "name": entry["name"],
                    "stats": entry["stats"],
                    "abilities": entry["abilities"],
                    "innates": entry["innates"],
                    "evolutions": entry["evolutions"],
                    "iconSymbol": entry.get("iconSymbol", ""),
                    "iconPath": icon_path,
                    "iconUrl": icon_url,
                }
            )

        return {"species": output}

    def save_species(self, payload: dict):
        file_name = payload.get("file")
        species_id = payload.get("species")
        updates = payload.get("updates", {})

        if not file_name or not species_id:
            return {"error": "Missing file or species in payload"}

        file_path = server.resolve_families_file(file_name)
        if not file_path:
            return {"error": "File not found"}

        original_text = server.read_text_raw(file_path)
        backup_path = Path(str(file_path) + ".bak")
        if not backup_path.exists():
            server.write_text_raw(backup_path, original_text)

        updated_text = server.apply_updates(original_text, species_id, updates)
        server.write_text_raw(file_path, updated_text)

        rel_backup = backup_path.relative_to(server.ROOT_DIR).as_posix()
        return {"ok": True, "backupPath": rel_backup}


if __name__ == "__main__":
    repo_root = detect_repo_root()
    configure_server_paths(repo_root)

    if getattr(sys, "frozen", False):
        base_dir = Path(getattr(sys, "_MEIPASS"))
    else:
        base_dir = Path(__file__).resolve().parent

    index_file = (base_dir / "public" / "index.html").resolve()
    if not index_file.exists():
        raise RuntimeError("Missing bundled UI files: public/index.html")

    webview.create_window(
        "Pokemon Species Editor",
        index_file.as_uri(),
        js_api=EditorApi(),
        width=1480,
        height=920,
        min_size=(1100, 700),
    )
    webview.start()
