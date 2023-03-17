typedef struct queueNode_t {
	int data;
	struct queueNode_t *next;
} QNode, *QNodePtr;

typedef struct queue_t {
	QNodePtr _front, _rear;
	unsigned size;
} QType, *Queue;

Queue init();
int isEmpty(Queue);
void enqueue(Queue, int);
void dequeue(Queue);
int front(Queue);
