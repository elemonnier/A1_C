#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_SIZE 30

#ifndef PILESFILES_STACK_H
#define PILESFILES_STACK_H

/*struct Stack {
    struct List* liste;
};*/

struct Stack {
    int size;
    int elems[MAX_SIZE];
};

struct Stack* emptyStack();

void push(struct Stack* s, int item, bool* valid);

int top(struct Stack* s, bool* valid);

int pop(struct Stack* s, bool* valid);

int stackSize(struct Stack* s);

bool isStackEmpty(struct Stack* s);

void printStack(struct Stack* s);

#endif
