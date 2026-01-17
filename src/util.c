#include "util.h"
#include <stdio.h>

void print_bin(uint16_t v) {
    for (int i = 15; i >= 0; i--) {
        if (i % 4 == 3 && i != 15)
            putchar(' ');
        putchar((v & (1U << i)) ? '1' : '0');
    }
    putchar('\n');
}
