#!/bin/bash

# Clean
time ./clean_build.bash

# Build
echo "Run cmake"
mkdir build
cd build
time cmake .. 
time make -j $1

# Run test
# ctest -R SPEED_TEST
echo "Run SPEED_TEST O0"
./Script_TestO0

echo "Run SPEED_TEST O3"
./Script_TestO3

