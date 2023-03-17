#include "queue.h"

int front(Queue q) {
	if(!isEmpty(q)) return q->_front->data;
	
	return (int)0;
}
