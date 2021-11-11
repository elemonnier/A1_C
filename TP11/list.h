#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef _LIST_H
#define _LIST_H

struct Cell{
    struct NodeTree* value;
    struct Cell* next;
};

struct List{
    int size;
    struct Cell* head;
};

struct Cell* createCell(struct NodeTree* tree);

struct List* createList();

bool isEmpty(struct List* l);

void addItem(struct List* l, struct NodeTree* tree, unsigned int position, bool* valid);

void deleteItem(struct List* l, unsigned int position, bool* valid);

void deleteList(struct List* l);

struct NodeTree* getItem(struct List* l, unsigned int position, bool* valid);


#endif //_LIST_H