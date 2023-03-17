#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "stack.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Stack s = initStack();
	stackPush(s, 1);
	stackPush(s, 2);
	stackPush(s, 3);
	
	while(!isStackEmpty(s)) {
		printf("%d ", stackPop(s));
	}
	
	return 0;
}
