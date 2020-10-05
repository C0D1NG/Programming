#!/bin/bash
# script to find the second largest number in a list
# list is loaded from numbers.txt in the directory the script is run in, each number being in its own line

listfile="numbers.txt"
type="largest" # this can be largest or smallest
nth="2" # find the NTH largest or smallest number

if [[ "$type" == "largest" ]]; then
  cat $listfile | sort -n | tail -n -${nth} | head -n 1
elif [[ "$type" == "smallest" ]]; then
  cat $listfile | sort -n | head -n ${nth} | tail -n 1
else
  echo "Unknown type."
  exit 1
fi
