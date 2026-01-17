#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

uint8_t *input_stack;
uint16_t *instruct_stack;
int input_stack_max;
int instruct_stack_max;

void inp_stack_init(char *path) {
    FILE *f = fopen(path, "r");
    if (!f) exit(1);

    input_stack = malloc(1024);

    while (fscanf(f, " %hhx", &input_stack[input_stack_max]) == 1)
        input_stack_max++;

    fclose(f);
}

void instruct_stack_init(char *path) {
    FILE *f = fopen(path, "r");
    if (!f) exit(2);

    instruct_stack = malloc(sizeof(uint16_t) * 1024);

    while (fscanf(f, " %hx", &instruct_stack[instruct_stack_max]) == 1)
        instruct_stack_max++;

    fclose(f);
}
