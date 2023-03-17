#include <stdlib.h>
#include "stack.h"

void pop(Stack s) {
	if(!isEmpty(s)) {
		SNodePtr temp = s->_top;
		s->_top = s->_top->next;
		free(temp);
		s->_size--;
	}
}
