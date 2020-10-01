#!/bin/bash

for i in *.shn ; do
	ffmpeg -i "$i" "$(basename "${i/.shn}")".flac
	sleep 1
done
