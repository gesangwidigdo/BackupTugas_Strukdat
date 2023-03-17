/*
	File yang berisi fungsi initQueue(), untuk mendeklarasikan Queue baru dengan mengalokasikan memori untuk Queue baru
	dan mengatur nilai awal head dan tail dari Queue yang dideklarasikan menjadi NULL
*/
#include <stdlib.h>
#include "queue.h"

Queue initQueue() {
	Queue qp = (Queue)malloc(sizeof(QueueType));
	qp->head = NULL;
	qp->tail = NULL;
	return qp;
}
