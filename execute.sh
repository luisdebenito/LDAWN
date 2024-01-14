#!/bin/bash

# Ensure that the script is executed from the directory containing the C++ files
cd "$(dirname "$0")" || exit

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Find all .cpp files in src directory and its subdirectories
CPP_FILES=$(find "$SCRIPT_DIR/src" -name "*.cpp")

INCLUDE_PATHS=""
for DIR in $(find "$SCRIPT_DIR/src" -type d); do
    INCLUDE_PATHS+=" -I$DIR"
done

# Build the compilation command
g++ main.cpp $CPP_FILES $INCLUDE_PATHS -o LDAWN -lglfw -lGL


# Check the exit status of the compilation
if [ $? -eq 0 ]; then
    echo "Compilation successful. Executable created"
     # Run the executable
    ./LDAWN

    # Check the exit status of the program
    exit_status=$?

    echo "Program exited with status $exit_status"
else
    echo "Compilation failed."
fi

