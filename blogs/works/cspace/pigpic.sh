#!/bin/bash

echo $1 | ./piglatin
sleep 1s
cd
cd Pictures/shitposts 
rm pigpic.png
scrot pigpic.png
cd
cd
