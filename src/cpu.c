#include "cpu.h"
#include <stdio.h>

uint64_t regs[16] = {
    0x0, 0x0f, 0x04, 0x00,
    0x0, 0x0,  0x0,  0x0,
    0x0, 0x0,  0x0,  0x0,
    0x0, 0x0,  0x0,  0x0,
};

void print_mem(void) {
    puts("");
    for (int i = 0; i < 16; i++) {
        printf("0x%02lx ", regs[i]);
        if ((i + 1) % 4 == 0)
            puts("");
    }
    puts("");
}
