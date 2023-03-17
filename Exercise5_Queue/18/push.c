#include <stdlib.h>
#include "stack.h"

void push(Stack s, int newData) {
	SNodePtr newNode = (SNodePtr)malloc(sizeof(StackNode));
	if(newNode) {
		s->_size++;
		newNode->data = newData;
		
		if(isEmpty(s)) newNode->next = NULL;
		else newNode->next = s->_top;
		
		s->_top = newNode;
	}
}
