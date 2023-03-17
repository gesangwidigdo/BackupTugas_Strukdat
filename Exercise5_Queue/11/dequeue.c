/*
	File yang berisi fungsi dequeue(), digunakan untuk menghapus data dari queue. Sebelum menghapus data, queue diperiksa
	terlebih dahulu menggunakan fungsi isEmpty(). Jika queue tersebut kosong, maka akan menampilkan "Attempt to remove 
	from empty queue" pada console. Sedangkan jika terdapat data pada queue tersebut, maka dibuat variabel hold dengan
	tipe data struct QueueData dan menginisialisasikan variabel tersebut dengan data yang terdapat pada head dari Queue
	(Q->head->data) serta variabel temp dengan tipe data struct *NodePtr dan menginisialisasikan variabel tersebut
	dengan head dari queue (Q->head). Lalu Q->head diinisialisasikan dengan data setelah Q->head (Q->head->next). Jika
	Q->head sama dengan NULL, artinya queue tersebut kosong dan tidak memiliki data. Setelah itu variabel temp dikosongi
	menggunakan fungsi free() dan fungsi tersebut me-return nilai variabel hold.
*/

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

double dequeue(Queue Q){
	if(isEmpty(Q)) {
		printf("\nAttempt to remove from empty queue\n");
		exit(1);
	}
	double hold = Q->head->data;
	NodePtr temp = Q->head;
	Q->head = Q->head->next;
	if (Q->head == NULL) Q->tail = NULL;
	free(temp);
	return hold;
}
