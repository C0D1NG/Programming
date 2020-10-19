#!/bin/bash
#To run this you have to have root privileges

#This aims to use the tool Petbox to automate honey pot setups.

#Log in to your Linux machine as an admin user. Open a terminal window and download pentbox with the command: 
#Fetch the tool
#save and run in root folder

eval "cd /home/andrew/Downloads"

eval "wget http://downloads.sourceforge.net/project/pentbox18realised/pentbox-1.8.tar.gz"

eval "tar xvfz pentbox-1.8.tar.gz"

eval "cd /home/andrew/Downloads/pentbox-1.8 && sudo ./pentbox.rb"
