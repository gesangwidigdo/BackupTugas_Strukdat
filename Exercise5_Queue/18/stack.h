typedef struct stackNode_t {
	int data;
	struct stackNode_t *next;
} StackNode, *SNodePtr;

typedef struct stack_t {
	SNodePtr _top;
	unsigned _size;
} StackType, *Stack;

Stack init();
int isEmpty(Stack);
void push(Stack, int);
void pop(Stack);
int peek(Stack);
Stack sortStack(Stack);
