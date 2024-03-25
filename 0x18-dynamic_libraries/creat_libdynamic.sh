#!/bin/bash

# Compile source files into object files with position-independent code
gcc -c -fPIC *.c

# Create a shared library
gcc -shared -o libdynamic.so *.o

# Clean up object files
rm *.o
