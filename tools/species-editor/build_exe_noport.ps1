Set-StrictMode -Version Latest
$ErrorActionPreference = "Stop"

$here = Split-Path -Parent $MyInvocation.MyCommand.Path
Set-Location $here

Write-Host "Installing/upgrading dependencies..."
py -m pip install --upgrade pyinstaller pywebview

Write-Host "Building SpeciesEditorNoPort.exe..."
py -m PyInstaller `
    --noconfirm `
    --clean `
    --name SpeciesEditorNoPort `
    --onefile `
    --noconsole `
    --add-data "public;public" `
    desktop_noport.py

Write-Host "Done. EXE is at: $here\dist\SpeciesEditorNoPort.exe"
