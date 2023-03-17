#include "queue.h"

double front(Queue queue) {
	if(!isEmpty(queue)) return queue->head->data;
	
	return (double) 0;
}
