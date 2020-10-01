#!/bin/bash


BOOK=$gen
CHAP=$3
LETTER=$((1 + RANDOM % 26))
LETTER=1
if [ $LETTER -eq 1 ];
then
	kjv $BOOK+$CHAP | grep -m1 "a" | ./piglatin
	echo A
elif [ $LETTER -eq 2 ];
then
	kjv gen / b
	echo B
elif [ $LETTER -eq 3 ];
then
	kjv gen / c
	echo C
elif [ $LETTER -eq 4 ];
then
	kjv gen / d
	echo D
elif [ $LETTER -eq 5 ];
then
	kjv gen / e
	echo E
elif [ $LETTER -eq 6 ];
then
	kjv gen / f
	echo F
elif [ $LETTER -eq 7 ];
then
	kjv gen / g
	echo G
elif [ $LETTER -eq 8 ];
then
	kjv gen / h
	echo H
elif [ $LETTER -eq 9 ];
then
	kjv gen / i
	echo I
elif [ $LETTER -eq 10 ];
then
	kjv gen / j
	echo J
elif [ $LETTER -eq 11 ];
then
	kjv gen / k
	echo K
elif [ $LETTER -eq 12 ];
then
	kjv gen / l
	echo L
elif [ $LETTER -eq 13 ];
then
	kjv gen / m
	echo M

elif [ $LETTER -eq 14 ];
then
	kjv gen / n
	echo N
elif [ $LETTER -eq 15 ];
then
	kjv gen / o
	echo O
elif [ $LETTER -eq 16 ];
then
	kjv gen / p
	echo P
elif [ $LETTER -eq 17 ];
then
	kjv gen / q
	echo Q
elif [ $LETTER -eq 18 ];
then
	kjv gen / r
	echo R
elif [ $LETTER -eq 19 ];
then
	kjv gen / s
	echo S
elif [ $LETTER -eq 20 ];
then
	kjv gen / t
	echo T
elif [ $LETTER -eq 21 ];
then
	kjv gen / u
	echo U
elif [ $LETTER -eq 22 ];
then
	kjv gen / v
	echo V
elif [ $LETTER -eq 23 ];
then
	kjv gen / w
	echo W
elif [ $LETTER -eq 24 ];
then
	kjv gen / x
	echo X
elif [ $LETTER -eq 25 ];
then

	kjv gen / y
	echo Y
elif [ $LETTER -eq 26 ];
then
	kjv gen / z
	echo Z
else
	kjv gen / $LETTER
	echo biggerthanC
fi
echo $LETTER

