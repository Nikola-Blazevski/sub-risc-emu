CC = gcc

STD_FLAGS  = -std=c99
OPT_FLAGS  = -O2 -march=native -mtune=native -funroll-loops
LTO_FLAGS  = -flto
WARN_FLAGS = -Wall -Werror
INC_FLAGS  = -Iinclude

CFLAGS  = $(STD_FLAGS) $(OPT_FLAGS) $(LTO_FLAGS) $(WARN_FLAGS) $(INC_FLAGS)
LDFLAGS = $(LTO_FLAGS)

TARGET = bin/sub-risc-emu

SRC = src/main.c src/cpu.c src/decode.c src/stack.c src/util.c
OBJ = $(SRC:src/%.c=build/%.o)

all: $(TARGET)

# Link step → executable in bin/
$(TARGET): $(OBJ)
	@mkdir -p bin
	$(CC) $(OBJ) $(LDFLAGS) -o $(TARGET)

# Compile step → object files in build/
build/%.o: src/%.c
	@mkdir -p build
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
