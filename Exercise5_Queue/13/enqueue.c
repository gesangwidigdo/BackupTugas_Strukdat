#include <stdio.h>
#include <stdlib.h>
#include "pqueue.h"

void enqueue(QNodePtr *head, int jobNum, int priorityNum) {
	QNodePtr top = (*head);
	QNodePtr temp = init(jobNum, priorityNum);
	
	if((*head)->priority > priorityNum) {
		temp->next = *head;
		(*head) = temp;
	} else {
		while (top->next != NULL && top->next->priority < priorityNum) {
			top = top->next;
		}
		temp->next = top->next;
		top->next = temp;
	}
}
