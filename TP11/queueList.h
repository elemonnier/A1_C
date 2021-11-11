#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"

#ifndef _QUEUE_H
#define _QUEUE_H

struct Queue {
	struct List* liste;
};

struct Queue* emptyQueue();

void enqueue(struct Queue* q,struct NodeTree* tree, bool* valid);

struct NodeTree* head(struct Queue* q, bool* valid);

struct NodeTree* dequeue(struct Queue* q,bool* valid);

int queueSize(struct Queue* q);

bool isQueueEmpty(struct Queue* q);


#endif //_QUEUE_H