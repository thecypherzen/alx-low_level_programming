#!/bin/bash
gcc -c -fpic -fPIC *.c && gcc -shared -fpic -fPIC -o liball.so *.o
