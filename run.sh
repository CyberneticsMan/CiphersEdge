#!/bin/bash
clear
mkdir -p builds
g++ Main.cpp Puzzle.cpp -o builds/Main
./builds/Main