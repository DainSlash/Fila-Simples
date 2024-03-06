#include "fila.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	queue q;
	queue_init(&q);
	
	
	queue_add(&q, 23);
	queue_add(&q, 5);
	queue_add(&q, 10);
	queue_remove(&q, &n);
	queue_add(&q, 13);
	queue_add(&q, 22);
	queue_add(&q, 17);
	queue_add(&q, 16);
	queue_add(&q, 44);
	queue_add(&q, 59);
	queue_print(q);
	
	return 0;
}
