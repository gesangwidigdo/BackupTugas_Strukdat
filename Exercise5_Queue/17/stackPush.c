#include "stack.h"

void stackPush(Stack s, int val) {
	enqueue(s->q1, val);
	s->size++;
	
	while (!isEmpty(s->q2)) {
		int x = front(s->q2);
		enqueue(s->q1, x);
		dequeue(s->q2);
	}
}
