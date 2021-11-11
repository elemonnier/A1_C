#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"
#include "list.h"

// STRUCTURE 1 : LISTE CHAINEE

struct Queue* emptyQueue(){
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    if (queue != NULL) {
        queue->liste = createList();
    }
    return queue;
}

void enqueue(struct Queue* q, int item, bool* valid){
    if (q->liste == false){
        *valid = false;
    }
    else {
        *valid = true;
        addItem(q->liste, item, 0, valid);
    }
}

int head(struct Queue* q, bool* valid){
    if (getNbItems(q->liste) == 0) {
        *valid = false;
        return EXIT_FAILURE;
    }
    else {
        *valid = true;
        return getItem(q->liste, getNbItems(q->liste)-1, valid);
    }
}

int dequeue(struct Queue* q, bool* valid){
    if (getNbItems(q->liste) == 0)
    {
        *valid = false;
        return EXIT_FAILURE;
    }
    else
    {
        *valid = true;
        int value = getItem(q->liste, (getNbItems(q->liste)-1), valid);
        deleteItem(q->liste, (getNbItems(q->liste)-1), valid);
        return value;
    }
}

int queueSize(struct Queue* q){
    return getNbItems(q->liste);
}

bool isQueueEmpty(struct Queue* q){
    if (isEmpty(q->liste) == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void printQueue(struct Queue* q){
    displayList(q->liste);
}






// STRUCTURE 2 : TABLEAU STATIQUE

struct Queue* emptyQueue(){
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    if (queue != NULL) {
        queue->size = 0;
        queue->front = MAX_SIZE;
        queue->rear = MAX_SIZE;
    }
    return queue;
}

void enqueue(struct Queue* q, int item, bool* valid){
    /*if (q->size == 0) {
        *valid = false;
    }*/
    if (((q->rear)-1)%(q->front) == 0) {
        *valid = false;
    }
    if (q->front == 0) {
        *valid = true;
        q->elems[q->front] = item;
        q->front = MAX_SIZE;
    }
    else {
        *valid = true;
        q->elems[q->front] = item;
        q->front--;
    }
}

int head(struct Queue* q, bool* valid){
    return q->rear;
}

int dequeue(struct Queue* q, bool* valid){
    if (q->rear == q->front) {
        *valid = false;
        return EXIT_FAILURE;
    }
    if (q->rear == 0) {
        *valid = true;
        int value = q->elems[q->rear];
        q->rear = q->size-1;
        return value;
    }
    else {
        *valid = true;
        int value = q->elems[q->rear];
        q->rear--;
        return value;
    }
}

int queueSize(struct Queue* q){
    return q->size;
}

bool isQueueEmpty(struct Queue*q){
    if (q->size == 0) {
        return true;
    }
    else {
        return false;
    }
}

void printQueue(struct Queue* q){
    if (isQueueEmpty(q) == true) {
        printf("Queue is empty.\n");
    }
    else {
        for (int counter = 0; counter < q->size; counter++) {
            printf("%d ", q->elems[counter]);
        }
    }
}