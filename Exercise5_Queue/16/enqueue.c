#include "queue.h"

void enqueue(Queue q, int newData) {
	stackPush(&q->stack1, newData);
}
