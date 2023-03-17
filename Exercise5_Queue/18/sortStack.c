#include "stack.h"

Stack sortStack(Stack stack) {
	Stack tmpStack = init();
	
	while(!isEmpty(stack)) {
		int tmp = top(stack);
		pop(stack);
		while(!isEmpty(tmpStack) && top(tmpStack) < tmp) {
			push(stack, top(tmpStack));
			pop(tmpStack);
		}
		
		push(tmpStack, tmp);
	}
	
	return tmpStack;
}
