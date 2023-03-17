#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int stackPop(Stack *top) {
	int res;
	Stack temp;
	
	if(*top == NULL) {
		printf("Attempt to remove data from Empty Stack\n");
		getchar();
		exit(0);
	} else {
		temp = *top;
		res = temp->data;
		*top = temp->next;
		free(temp);
		return res;
	}
}
