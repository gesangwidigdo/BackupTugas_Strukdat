#include "stack.h"

int top(Stack s) {
	if(!isEmpty(s)) return s->_top->data;
	
	return 0;
}
