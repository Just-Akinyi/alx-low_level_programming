#!/bin/bash#!
gcc *.c -c -fPICgcc
gcc *.o -shared -o liball.so
