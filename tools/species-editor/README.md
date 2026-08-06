# Species Editor

A lightweight local web UI for editing Pokemon species entries in `src/data/pokemon/species_info/gen_*_families.h`.

## Features

- Left panel list of all species in the selected gen family file.
- Right panel editor for:
  - baseHP
  - baseAttack
  - baseDefense
  - baseSpeed
  - baseSpAttack
  - baseSpDefense
  - abilities (3 slots: regular, regular, hidden)
  - innates (0 to many, optional line in file)
  - evolutions (raw expression)
- Stats are saved as raw text, so expressions like `80 + 4` are preserved.
- Ability and innate inputs use a searchable datalist loaded from `include/constants/abilities.h`.
- Save behavior is minimal in-place replacement inside the chosen species block.
- On first save for each file, creates a backup of the original file as `.bak`.

## Run

From repo root:

```powershell
py tools/species-editor/server.py
```

Open:

- http://127.0.0.1:5179

Optional: if Node.js is installed, you can also run `node tools/species-editor/server.js`.

## Build A Windows EXE

You can build a one-click executable that launches the editor and opens the UI automatically.

From `tools/species-editor`:

```powershell
./build_exe.ps1
```

After build:

- Run `tools/species-editor/dist/SpeciesEditor.exe`
- It starts the internal local service and opens the editor page for you.
- If you close the editor page, the EXE auto-exits after about 20 seconds.

Notes:

- This still uses localhost internally, but you do not need to manually run `py server.py`.
- If SmartScreen appears, use `More info` -> `Run anyway` for unsigned local builds.

## Build A No-Port Desktop EXE

This build runs as a desktop application with a direct Python bridge (no localhost server/port).

From `tools/species-editor`:

```powershell
./build_exe_noport.ps1
```

After build:

- Run `tools/species-editor/dist/SpeciesEditorNoPort.exe`
- No browser URL and no local port are used.

Important:

- Keep the EXE inside your repo tree (for example in `tools/species-editor/dist`) so it can locate `src/data/pokemon/species_info` and other repo files.

## Notes

- Ability slots always save 3 entries, defaulting empty slots to `ABILITY_NONE`.
- If no innates are set, the `.innates` line is removed.
- If innates are set and line was missing, it is inserted after `.abilities`.
- Evolutions are edited as raw expression text (for complex macro forms).
