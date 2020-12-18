#!/bin/bash

echo    
rm $1
gcc $1.c -o $1
./$1
