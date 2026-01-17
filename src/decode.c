
#include "decode.h"
#include "cpu.h"
#include "util.h"
#include <stdio.h>

static inline uint8_t hex_nth(uint16_t v, int n) {
    return (v >> (n * 4)) & 0xF;
}

static inline void add(uint8_t d, uint8_t s1, uint8_t s2) {
    if (d)
        regs[d] = regs[s1] + regs[s2];
}

void read_instr(uint16_t instr) {
    uint8_t x3 = hex_nth(instr, 3);
    uint8_t x2 = hex_nth(instr, 2);
    uint8_t x1 = hex_nth(instr, 1);

    printf("0x%x\n", instr);
    print_bin(instr);

    add(x3, x2, x1);
}
