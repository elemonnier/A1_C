#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"

#ifndef FILES_QUEUE_H
#define FILES_QUEUE_H

struct Queue {
    struct List* liste;
};

#define MAX_SIZE 30
struct Queue {
    int size;
    int front;
    int rear;
    int elems[MAX_SIZE];
} ;

struct Queue* emptyQueue();
void enqueue(struct Queue* q,int item, bool* valid);
int head(struct Queue* q, bool* valid);
int dequeue(struct Queue* q, bool* valid);
int queueSize(struct Queue* q);
bool isQueueEmpty(struct Queue*q);
void printQueue(struct Queue* q);

#endif
