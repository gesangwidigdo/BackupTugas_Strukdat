#include <stdlib.h>
#include "pqueue.h"

void dequeue(PQueue *head) {
	PQueue temp = *head;
	(*head) = (*head)->next;
	free(temp);
}
