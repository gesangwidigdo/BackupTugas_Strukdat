#include <stdio.h>
#include <stdlib.h>
#include "pqueue.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	PQueue pq = init(4, 1);
	enqueue(&pq, 5, 2);
	enqueue(&pq, 6, 3);
	enqueue(&pq, 7, 0);
	
	while(!isEmpty(pq)) {
		printf("%d ", peek(&pq));
		dequeue(&pq);
	}
	return 0;
}
