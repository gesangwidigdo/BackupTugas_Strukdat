#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int dequeue(Queue q) {
	int data;
	
	if(q->stack1 == NULL && q->stack2 == NULL) {
		printf("Queue is NULL\n");
		getchar();
		exit(0);
	}
	
	if(q->stack2 == NULL) {
		while(q->stack1 != NULL) {
			data = stackPop(&q->stack1);
			stackPush(&q->stack2, data);
		}
	}
	data = stackPop(&q->stack2);
	return data;
}
