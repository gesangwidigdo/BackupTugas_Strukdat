#include "stack.h"

int stackTop(Stack s) {
	return (isEmpty(s->q1) ? -1 : front(s->q1));
}
