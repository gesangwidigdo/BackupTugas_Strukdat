#include <stdlib.h>
#include "pqueue.h"

void dequeue(QNodePtr *pq) {
	QNodePtr temp = *pq;
	(*pq) = (*pq)->next;
	free(temp);
}
