/*
	File yang berisi fungsi isEmpty(), untuk mengecek apakah suatu Queue tidak memiliki data (kosong) atau
	terdapat data di dalam Queue.
*/

#include <stdlib.h>
#include "queue.h"

int isEmpty(Queue Q) {
	return (Q->head == NULL);
}
