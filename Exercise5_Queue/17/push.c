#include <stdlib.h>
#include "queue.h"

void enqueue(Queue q, int val) {
	QNodePtr newNode = (QNodePtr)malloc(sizeof(QNode));
	if(newNode) {
		q->size++;
		newNode->data =val;
		newNode->next = NULL;
		
		if(isEmpty(q)) q->_front = q->_rear = newNode;
		else {
			q->_rear->next = newNode;
			q->_rear = newNode;
		}
	}
}
