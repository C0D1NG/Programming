#!/bin/bash
# script to find the second largest number in a list
# list is loaded from numbers.txt in the directory the script is run in, each number being in its own line

listfile = "numbers.txt"
cat $listfile | sort -n | tail -n -2 | head -n 1
