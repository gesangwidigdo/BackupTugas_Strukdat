#include "queue.h"

typedef struct stack_t {
	Queue q1, q2;
	int size;
} StackType, *Stack;

Stack initStack();
int isStackEmpty(Stack);
void stackPush(Stack, int);
void stackPop(Stack);
int stackTop(Stack);
