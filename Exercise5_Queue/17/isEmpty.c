#include <stdlib.h>
#include "queue.h"

int isEmpty(Queue q) {
	return (q->_front == NULL && q->_rear == NULL);
}
