#include "stack.h"
#include "decode.h"
#include "cpu.h"

int main(int argc, char **argv) {
    inp_stack_init(argv[1]);
    instruct_stack_init(argv[2]);

    print_mem();
    read_instr(0x3120);
    print_mem();

    return 0;
}
