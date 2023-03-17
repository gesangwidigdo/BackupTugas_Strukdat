#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void stackPush(Stack *top, int newData) {
	Stack newNode = (Stack)malloc(sizeof(StackType));
	
	if (newNode == NULL) {
		printf("Attempt to add new data to full stack\n");
		getchar();
		exit(0);
	}
	
	newNode->data = newData;
	newNode->next = (*top);
	(*top) = newNode;
}
