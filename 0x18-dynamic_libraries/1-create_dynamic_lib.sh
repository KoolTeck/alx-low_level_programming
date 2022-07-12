#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c -FPIC *.c
gcc *.o -shared -o liball.so
