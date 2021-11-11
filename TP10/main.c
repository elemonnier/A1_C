#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"
#include "list.h"

int main() {
    struct Queue* q = emptyQueue();
    bool valid;
    printf("%d\n", isQueueEmpty(q)); // => 1
    printf("%d\n", queueSize(q)); // => 0
    dequeue(q, &valid);
    printf("%d\n", valid); // => 0
    enqueue(q, 1, &valid);
    printf("%d\n", valid); // => 1
    enqueue(q, 2, &valid);
    printf("%d\n", valid); // => 1
    enqueue(q, 3, &valid);
    printf("%d\n", valid); // => 1
    printf("%d\n", isQueueEmpty(q)); // => 0
    printf("%d\n", queueSize(q)); // => 3
    int item;
    item = head(q, &valid);
    printf("%d %d\n", item, valid); // => 1 1
    printf("%d\n", isQueueEmpty(q)); // => 0
    printf("%d\n", queueSize(q)); // => 3
    item = dequeue(q, &valid);
    printf("%d %d\n", item, valid); // => 1 1
    item = dequeue(q, &valid);
    printf("%d %d\n", item, valid); // => 2 1
    item = dequeue(q, &valid);
    printf("%d %d\n", item, valid); // => 3 1
    printf("%d\n", isQueueEmpty(q)); // => 1
    printf("%d\n", queueSize(q)); // => 0

    free(q);
    return EXIT_SUCCESS;
}