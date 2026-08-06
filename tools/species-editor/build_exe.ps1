Set-StrictMode -Version Latest
$ErrorActionPreference = "Stop"

$here = Split-Path -Parent $MyInvocation.MyCommand.Path
Set-Location $here

Write-Host "Installing/upgrading PyInstaller..."
py -m pip install --upgrade pyinstaller

Write-Host "Building SpeciesEditor.exe..."
py -m PyInstaller `
    --noconfirm `
    --clean `
    --name SpeciesEditor `
    --onefile `
    --noconsole `
    --add-data "public;public" `
    --add-data "../../include/constants/abilities.h;include/constants" `
    --add-data "../../src/data/graphics/pokemon.h;src/data/graphics" `
    desktop_launcher.py

Write-Host "Done. EXE is at: $here\dist\SpeciesEditor.exe"
