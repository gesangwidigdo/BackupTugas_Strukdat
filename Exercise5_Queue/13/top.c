#include "pqueue.h"

int peek(QNodePtr *pq) {
	return (*pq)->job;
}
