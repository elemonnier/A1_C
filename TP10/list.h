#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef _LIST_H
#define _LIST_H

struct Cell{
    int value;
    struct Cell* next;
};

struct List{
    int size;
    struct Cell* head;
};

struct Cell* createCell(int val);

struct List* createList();

bool isEmpty(struct List* l);

void addItem(struct List* l, int value, unsigned int position, bool* valid);

void deleteItem(struct List* l, unsigned int position, bool* valid);

void deleteList(struct List* l);

struct List* createListfromTab(int T[], unsigned int size, bool* valid);

void displayList(struct List* l);

unsigned int getNbItems(struct List* l);

int getItem(struct List* l, unsigned int position, bool* valid);


#endif //_LIST_H