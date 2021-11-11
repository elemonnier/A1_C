#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "memory_entry.h"


int malloc_cell(){
    int counter = 0;
    while (array[counter]->used){
        counter++;
    }
    if (counter == MEM_SIZE){
        return NULL2;
    }
    else {
        array[counter]->used = true;
        return counter;
    }
}

int free_cell(int value){
    array[value]->used = false;
    return array[value]->value;
}

void display_list(int head){
    struct Memory_Entry * ptr = array[head];
    while(ptr->nextIndex != NULL2){
        printf("%d ", ptr->value);
        ptr = array[ptr->nextIndex];
    }
    printf("%d", ptr->value);
}