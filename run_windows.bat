@echo off
gcc grocery_billing.c -o grocery_billing.exe
if errorlevel 1 (
    echo.
    echo Compilation failed. Please check that GCC is installed.
    pause
    exit /b 1
)
grocery_billing.exe
pause
