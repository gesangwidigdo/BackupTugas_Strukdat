/*
	File yang berisi fungsi enqueue(), untuk menambahkan data baru ke dalam queue. Sebelum memasukkan data diperiksa 
	terlebih dahulu menggunakan fungsi isEmpty(). Jika queue tersebut kosong, maka data yang ditambahkan akan menjadi 
	head dan tail (data tunggal) pada queue tersebut, sedangkanjika tidak maka data tersebut ditambahkan ke bagian tail 
	dari queue, dan q->tail direferensikan ke data yang baru.
*/

#include <stdlib.h>
#include "queue.h"

void enqueue(Queue Q, double d) {
	NodePtr np = (NodePtr)malloc(sizeof(Node));
	np->data = d;
	np->next = NULL;
	if(isEmpty(Q)) {
		Q->head = np; 
		Q->tail = np;
	} else {
		Q->tail->next = np; 
		Q->tail = np;
	}
}
