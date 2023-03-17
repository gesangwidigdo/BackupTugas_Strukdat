#include <stdlib.h>
#include "pqueue.h"

QNodePtr init(int jobNum, int priorityNum) {
	QNodePtr pq = (QNodePtr)malloc(sizeof(QNode));
	pq->job = jobNum;
	pq->priority = priorityNum;
	pq->next = NULL;
	return pq;
}
