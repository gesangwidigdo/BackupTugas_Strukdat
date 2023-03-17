#include <stdlib.h>
#include "stack.h"

Stack init() {
	Stack s = (Stack)malloc(sizeof(StackType));
	s->_top = NULL;
	s->_size = 0;
}
