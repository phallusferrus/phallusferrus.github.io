#!/bin/bash

echo $1 | ./piglatin
sleep 1s
cd
cd Desktop/shitposts
rm pigpic.png
scrot pigpic.png
