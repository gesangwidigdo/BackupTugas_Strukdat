#include <stdlib.h>
#include "pqueue.h"

void enqueue(PQueue *head, int job, int priority) {
	PQueue first = (*head);
	PQueue temp = init(job, priority);
	
	if((*head)->priority < priority) {
		temp->next = (*head);
		(*head) = temp;
	} else {
		while(first->next != NULL && first->next->priority > priority) {
			first = first->next;
		}
		temp->next = first->next;
		first->next = temp;
	}
}
