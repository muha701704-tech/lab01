@echo off
setlocal
cd /d "%~dp0"
where cl >nul 2>nul
if not errorlevel 1 goto compiler_ready

set "TASK_VSWHERE=%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe"
if not exist "%TASK_VSWHERE%" goto compiler_missing
for /f "usebackq tokens=*" %%I in (`"%TASK_VSWHERE%" -latest -products * -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath`) do set "TASK_VS_DIR=%%I"
if not defined TASK_VS_DIR goto compiler_missing
call "%TASK_VS_DIR%\Common7\Tools\VsDevCmd.bat" -no_logo -arch=x64 -host_arch=x64
if errorlevel 1 exit /b 1

:compiler_ready
if not exist build mkdir build
if not exist build exit /b 1
for %%F in (pw01-*.c) do (
    cl /nologo /TC /std:c11 /utf-8 /W4 /WX "%%F" "/Febuild\%%~nF.exe" "/Fobuild\%%~nF.obj"
    if errorlevel 1 exit /b 1
)
echo Built all 10 programs in build\.
exit /b 0

:compiler_missing
echo Install the Desktop development with C++ workload in Visual Studio Installer.
exit /b 1
