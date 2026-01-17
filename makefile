CC = gcc

# Language / standard
STD_FLAGS = -std=c99

# Optimization
OPT_FLAGS = -O2 -march=native -mtune=native -funroll-loops -fomit-frame-pointer

# Link-time optimization
LTO_FLAGS = -flto

# Warnings
WARN_FLAGS = -Wall -Wextra -Werror

# Final flag groups
CFLAGS = $(STD_FLAGS) $(OPT_FLAGS) $(LTO_FLAGS) $(WARN_FLAGS)
LDFLAGS = $(LTO_FLAGS)

TARGET = 
SRC = src/main.c
OBJ = build/main.o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o $(TARGET)

main.o: main.c
	$(CC) $(CFLAGS) -c src/main.c -o build/main.o

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)
