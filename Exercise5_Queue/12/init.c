#include <stdlib.h>
#include "pqueue.h"

PQueue init(int job, int priority) {
	PQueue pq = (PQueue)malloc(sizeof(PQueueNode));
	pq->data = job;
	pq->priority = priority;
	pq->next = NULL;
	return pq;
}
