#!/bin/bash

PROJECT_NAME="tetris-sfml"
SRC_DIR="src"
BUILD_DIR="build"
LIBRARIES="-lsfml-graphics -lsfml-window -lsfml-system"

mkdir -p $BUILD_DIR
g++ -c $SRC_DIR/*.cpp
g++ *.o -o $BUILD_DIR/$PROJECT_NAME $LIBRARIES
rm *.o
