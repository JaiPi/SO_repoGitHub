#!/bin/bash
num=$((RANDOM % 100))
echo "BATOTA: o numero é $num"
y=-1
c=0
while [ $y -ne $num ];do
	echo -n  "tente adivinhar: "
	read y
	c=$((c+1))
	if [ $y -lt $num ]; then
		echo "Muito baixo" 
	elif [ $y -gt $num ]; then
		echo "Muito alto"
	else 
		echo "Acertou à $cº tentativa"
	fi
done
