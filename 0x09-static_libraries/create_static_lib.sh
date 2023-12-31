#!/bin/bash

# Compile each .c file into corresponding .o files
for file in *.c; do
    gcc -Wall -pedantic -Werror -Wextra -c "$file"
done

# Create the static library liball.a from the compiled .o files
ar rcs liball.a *.o

# Clean up by removing the compiled .o files
rm -f *.o

