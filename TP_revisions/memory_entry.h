#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#ifndef REVISIONS_MEMORY_ENTRY_H

#define NULL2 -1
#define MEM_SIZE 100



struct Memory_Entry{
    bool used;
    int value;
    int nextIndex;
};



int malloc_cell();
int free_cell();
void display_list(int head);

#define REVISIONS_MEMORY_ENTRY_H

#endif //REVISIONS_MEMORY_ENTRY_H
