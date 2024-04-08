#!/bin/bash

gcc geraEntradasAleatorias.c -o geraEntradasAleatorias
gcc main.c -o main

for i in {1..6}; do
    ./geraEntradasAleatorias > arquivo${i}.in
    sleep 0.9
    ./main < arquivo_${i}.in > arquivo${i}.out
done
