#!/bin/bash

if [[ -f "$1"]]; then
	echo "file"
elif [[ -d "$1"]]; then
	echo "directory"
else
	echo "wtf is $1"
fi
