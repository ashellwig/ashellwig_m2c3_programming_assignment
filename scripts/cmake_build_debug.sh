#!/bin/bash

export PROJECT_SOURCE_DIR="/home/ahellwig/Documents/School/CSC160/Module-1/Programming-Assignments/Chapter2Program2"
export BUILD_DIR="/home/ahellwig/Documents/School/CSC160/Module-1/Programming-Assignments/Chapter2Program2/build"

if [[ -z "$(ls -A ${BUILD_DIR})" ]]; then
    cd "${BUILD_DIR}" || exit 1

    cmake ..
    cmake --build .

    cd "${PROJECT_SOURCE_DIR}" || exit 1
else
    echo "Build dir full, cleaning..."
    rm -rf "${BUILD_DIR:?}/**"
    rm -rf "${BUILD_DIR:?}/.*"

    cd "${BUILD_DIR}" || exit 1

    cmake ..
    cmake --build .

    cd "${PROJECT_SOURCE_DIR}" || exit 1
fi

unset PROJECT_SOURCE_DIR
unset BUILD_DIR
