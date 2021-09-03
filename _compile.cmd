@echo off

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

tools\_build\bas2tap\Release\bas2tap -a10 boot.bas
if errorlevel 1 exit /B 1

tools\_build\maketrd\Release\maketrd
if errorlevel 1 exit /B 1
