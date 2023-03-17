#include <stdio.h>
#include "stack.h"

void stackPop(Stack s) {
	if(isEmpty(s->q1)) printf("No Elements\n");
	else dequeue(s->q1);
}
