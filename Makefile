# Compiler and flags
CC = clang
CFLAGS = -Wall -Werror -g -fsanitize=address,leak,undefined

# Source files
SRC = main.c bst.c bstReplace.c

# Target binary
TARGET = main

.PHONY: all clean

# Default target: compile and link directly
all: $(TARGET)

# Build target: compile and link in one step
$(TARGET):
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Clean build files
clean:
	rm -rf $(TARGET) *.dSYM
