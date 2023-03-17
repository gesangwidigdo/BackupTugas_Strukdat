typedef struct node {
	int job, priority;
	struct node *next;
} QNode, *QNodePtr;

QNodePtr init(int, int);
void enqueue(QNodePtr*, int, int);
void dequeue(QNodePtr*);
int peek(QNodePtr*);
