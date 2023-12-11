#!/bin/bash
gcc -Wall -fPIC -c *.c -o libdynamic.o
gcc -shared -o libdynamic.so libdynamic.o
