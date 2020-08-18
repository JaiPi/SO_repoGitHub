#!/bin/bash
if [ -f $1 ]; then
echo "$1 existe"
if [ -x $1 ]; then
echo "$1 é executável"
else
echo "$1 não é executável"
fi
else
echo "$1 não existe"
fi
