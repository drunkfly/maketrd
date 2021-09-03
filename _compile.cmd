@echo off
setlocal

set PATH=%~dp0tools\z88dk\bin;%PATH%
set ZCCCFG=%~dp0tools\z88dk\lib\config

if not exist %~dp0tools\_build mkdir %~dp0tools\_build
if errorlevel 1 exit /B 1

cd %~dp0tools\_build
if errorlevel 1 exit /B 1

cmake -G "Visual Studio 16 2019" ..
if errorlevel 1 exit /B 1

cmake --build . --config Release
if errorlevel 1 exit /B 1

cd %~dp0
if errorlevel 1 exit /B 1

tools\sjasmplus\sjasmplus --syntax=af --dirbol --fullpath loader.asm --raw=loader.bin
if errorlevel 1 exit /B 1

zcc +zx -vn -clib=sdcc_iy -startup=5 --opt-code-size -m -zorg=32768 -o main main.c
if errorlevel 1 exit /B 1

if exist binary.c del binary.c
if errorlevel 1 exit /B 1

ren main_CODE.bin binary.c
if errorlevel 1 exit /B 1

tools\_build\bas2tap\Release\bas2tap -a10 boot.bas
if errorlevel 1 exit /B 1

tools\_build\maketrd\Release\maketrd
if errorlevel 1 exit /B 1
