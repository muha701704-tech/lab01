@echo off
chcp 65001 >nul
setlocal
cd /d "%~dp0"
if not exist build mkdir build
if not exist build goto folder_failed

echo Собираем все 10 программ. Подождите...
call build.cmd >"build\build-log.txt" 2>&1
if errorlevel 1 goto build_failed

for /l %%N in (1,1,10) do (
    cls
    echo Задание 1.%%N
    echo.
    "build\pw01-%%N.exe"
    if errorlevel 1 goto run_failed
    echo.
    echo Нажмите любую клавишу, чтобы продолжить.
    pause >nul
)

echo.
echo Запуск всех 10 заданий завершён.
echo Нажмите любую клавишу, чтобы закрыть окно.
pause >nul
exit /b 0

:build_failed
echo.
echo Ошибка сборки:
type "build\build-log.txt"
pause
exit /b 1

:run_failed
echo.
echo Ошибка запуска программы.
pause
exit /b 1

:folder_failed
echo Не удалось создать папку build рядом с исходниками.
pause
exit /b 1
