
#ifndef STACK_H
#define STACK_H

#include <stdint.h>

extern uint8_t *input_stack;
extern uint16_t *instruct_stack;
extern int input_stack_max;
extern int instruct_stack_max;

void inp_stack_init(char *path);
void instruct_stack_init(char *path);

#endif
