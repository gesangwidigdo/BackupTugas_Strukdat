#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "queue.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Queue q = (Queue)malloc(sizeof(QueueType));
	q->stack1 = NULL;
	q->stack2 = NULL;
	enqueue(q, 1);
	enqueue(q, 2);
	enqueue(q, 3);
	
	printf("%d ", dequeue(q));
    printf("%d ", dequeue(q));
    printf("%d ", dequeue(q));
	
	return 0;
}
