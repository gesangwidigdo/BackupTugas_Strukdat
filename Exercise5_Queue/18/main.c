#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Stack stack = init();
	
	push(stack, 3);
	push(stack, 1);
	push(stack, 2);
	
	Stack tmpStack = sortStack(stack);
	printf("Sorted numbers: ");
	while(!isEmpty(tmpStack)) {
		printf("%d ", top(tmpStack));
		pop(tmpStack);
	}
	
	return 0;
}
