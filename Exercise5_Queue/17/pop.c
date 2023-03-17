#include <stdlib.h>
#include "queue.h"

void dequeue(Queue q) {
	if(!isEmpty(q)) {
		QNodePtr temp = q->_front;
		q->_front = q->_front->next;
		free(temp);
		
		if(q->_front == NULL) q->_rear = NULL;
		
		q->size--;
	}
}
