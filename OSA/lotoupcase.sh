#!/bin/bash
# get filename
echo -n "Enter File Name : "
read fileName
 
# make sure file exits for reading
if [ ! -f $fileName ]; then
  echo "Filename $fileName does not exists"
  exit 1
fi
 
# convert uppercase to lowercase using tr command
tr '[a-z]' '[A-Z]' < $fileName
 
# Bash version 4 user should use builtin 
