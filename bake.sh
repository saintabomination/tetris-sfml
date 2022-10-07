#!/bin/bash

PROJECT_NAME="tetris-sfml"
SRC_DIR="src"
BUILD_DIR="build"

mkdir -p $BUILD_DIR
g++ -c $SRC_DIR/*.cpp
g++ *.o -o $BUILD_DIR/$PROJECT_NAME
rm *.o
