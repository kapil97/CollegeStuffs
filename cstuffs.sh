#!/bin/bash
echo -e "\n===== SPA C Files =====\n";
for file in `ls SPA/*.c`; do
    echo -e "Compiling ${file/.c/}";
    gcc -o ${file/.c/.o} ${file} ${CFLAGS} -lm;
done

echo -e "\n===== DS C Files =====\n";
for file in `ls DS/*.c`; do
    echo -e "Compiling ${file/.c/}";
    gcc -o ${file/.c/.o} ${file} ${CFLAGS} -lm;
done

