#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"
#include "list.h"

// STRUCTURE 1 : LISTE CHAINEE

struct Stack* emptyStack(){
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    if (stack != NULL) {
        stack->liste = createList();
    }
    return stack;
}

void push(struct Stack* s, int item, bool* valid) {
    if (s->liste == false) {
        *valid = false;
    } else {
        addItem(s->liste, item, 0, valid);
        *valid = true;
    }
}

int top(struct Stack* s, bool* valid){
    return getItem(s->liste, 0, valid);
}

int pop(struct Stack* s, bool* valid){
    int item = getItem(s->liste, 0, valid);
    deleteItem(s->liste, 0, valid);
    return item;
}

int stackSize(struct Stack* s){
    return getNbItems(s->liste);
}

bool isStackEmpty(struct Stack* s){
    if (isEmpty(s->liste) == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}


void printStack(struct Stack* s){
     // !!!!! NE PAS OUBLIER DE PRECISER QUE CEST VIDE OU PAS
    displayList(s->liste);
}






// STRUCTURE 2 : TABLEAU STATIQUE

struct Stack* emptyStack(){
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    if (stack != NULL) {
        stack->size = 0;
    }
    return stack;
}

void push(struct Stack* s, int item, bool* valid){
    if (s->size == MAX_SIZE)
    {
        *valid = false;
    }
    else
    {
        *valid = true;
        s->elems[s->size] = item;
        (s->size)++;
    }
}

int top(struct Stack* s, bool* valid) {
    if (s->size == 0) {
        *valid = false;
        return EXIT_FAILURE;
    }
    else {
        *valid = true;
        return s->elems[s->size-1];
    }
}

int pop(struct Stack* s, bool* valid){
    if (s->size == 0)
    {
        *valid = false;
        return EXIT_FAILURE;
    }
    else {
        *valid = true;
        int value = (s->elems)[(s->size)-1];
        (s->size)--;
        return value;
    }
}

int stackSize(struct Stack* s){
    return s->size;
}

bool isStackEmpty(struct Stack* s){
    if (s->size == 0)
    {
        return true;
    }
    else {
        return false;
    }
}

void printStack(struct Stack* s){
    if (isStackEmpty(s) == true) {
        printf("Stack is empty.\n");
    }
    else {
        for (int counter = 0; counter < s->size; counter++) {
            printf("%d ", s->elems[counter]);
        }
    }
}