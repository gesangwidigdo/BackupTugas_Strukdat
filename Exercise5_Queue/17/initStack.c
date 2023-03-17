#include <stdlib.h>
#include "stack.h"

Stack initStack() {
	Stack s = (Stack)malloc(sizeof(StackType));
	init(s->q1);
	init(s->q2);
	s->size = 0;
}
