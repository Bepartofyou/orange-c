#!/bin/sh

gcc -o test-1 test-1.c util.h
gcc -o test-2 test-2.c util.h
gcc -o test-3 test-3.c util.h
gcc -o test-4 test-4.c util.h
gcc -o test-5 test-5.c util.h

./test-1
echo "================"
./test-2
echo "================"
./test-3
echo "================"
./test-4
echo "================"
./test-5
echo "================"

rm test-1 test-2 test-3 test-4 test-5
