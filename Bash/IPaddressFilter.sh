#!/bin/bash

#Scan large txt file for ip addresses
#Send IP addresses to a text file *addresses.txt

cat txt.txt | grep -E -o "([0-9]{1,3}[.]){3}[0-9]{1,3}" >> addresses.txt
