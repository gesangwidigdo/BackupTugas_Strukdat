#include <stdlib.h>
#include "queue.h"

Queue init() {
	Queue q = (Queue)malloc(sizeof(QType));
	q->_front = NULL;
	q->_rear = NULL;
	q->size = 0;
}
