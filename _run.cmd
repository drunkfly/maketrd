@echo off

cd %~dp0
if errorlevel 1 exit /B 1

call _compile.cmd
if errorlevel 1 exit /B 1

tools\speccy\speccy output.trd
if errorlevel 1 exit /B 1
