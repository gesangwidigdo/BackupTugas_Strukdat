#ifndef STRUCT_H_
#define STRUCT_H_
typedef struct stack_t {
	int data;
	struct stack_t *next;
} StackType, *Stack;

void stackPush(Stack *, int);
int stackPop(Stack *);

#endif
