#include "stack.h"

int isStackEmpty(Stack s) {
	return (isEmpty(s->q1) && isEmpty(s->q2));
}
