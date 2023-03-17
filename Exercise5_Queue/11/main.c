#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(int argc, char *argv[]) {
	Queue Q = initQueue();
	int n;
	double dnum;
	printf("Enter number of Queue Data: ");
	scanf("%d", &n);
	
	// Input	
	while(n--) {
		scanf("%lf", &dnum);
		enqueue(Q, dnum);
	}
	
	// Output
	while(!isEmpty(Q)) {
		printf("%.2lf ", front(Q));
		Q->head = Q->head->next;
	}
	
	return 0;
}
