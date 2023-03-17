/* 
	Pendefinisian structure untuk :
		QueueData, berisi variabel dengan tipe data double yang akan digunakan untuk menyimpan data Queue
		Linked-list (Node, *NodePtr), berisi variabel data dengan tipe data double dan variabel *next dengan 
									tipe data itu sendiri (struct node)	
		Queue (QueueType, *Queue), dengan variabel bernama head dan tail dengan tipe data NodePtr
*/

typedef struct node {
	double data;
	struct node *next;
} Node, *NodePtr;

typedef struct {
	NodePtr head, tail;
} QueueType, *Queue;

/* Deklarasi prototipe fungsi yang akan digunakan untuk Queue */
Queue initQueue();
int isEmpty(Queue);
void enqueue(Queue, double);
double dequeue(Queue);
double front(Queue);
