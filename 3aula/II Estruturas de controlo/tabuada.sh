#!/bin/bash
i=1
echo -n "Tabuada: "
read x
while [ $i -lt 11 ]; do
	echo "${x}x$i=$((i*x))"
	i=$(( $i+1 ))
done
