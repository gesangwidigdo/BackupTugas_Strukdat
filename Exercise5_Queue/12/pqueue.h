typedef struct pqueueNode_t {
	int data, priority;
	struct pqueueNode_t *next;
} PQueueNode, *PQueue;

/* Deklarasi prototipe fungsi */
PQueue init(int, int);
int isEmpty(PQueue);
void enqueue(PQueue, int, int);
void dequeue(PQueue);
int peek(PQueue);
