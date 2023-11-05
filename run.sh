#!/bin/bash
clear
mkdir -p builds
g++ Main.cpp Puzzle.cpp DecryptionChallenge.cpp HackingChallenge.cpp -o builds/Main
./builds/Main