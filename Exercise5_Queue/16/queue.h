#include "stack.h"
typedef struct queue_t {
	Stack stack1, stack2;
} QueueType, *Queue;

void enqueue(Queue, int);
int dequeue(Queue);
