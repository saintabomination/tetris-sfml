#!/bin/bash

PROJECT_NAME="tetris-sfml"
SRC_DIR="src"
BUILD_DIR="build"
HEADER_DIR="src/Headers"
CLASS_DIR="src/Classes"
LIBRARIES="-lsfml-graphics -lsfml-window -lsfml-system"

mkdir -p $BUILD_DIR
g++ -c $SRC_DIR/*.cpp $CLASS_DIR/*.cpp
g++ *.o -o $BUILD_DIR/$PROJECT_NAME -I $HEADER_DIR $LIBRARIES
rm *.o
