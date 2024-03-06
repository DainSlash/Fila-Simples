#include "fila.h"
#include <stdbool.h>
#include <stdio.h>

void queue_init(queue *q){
	q->start = q->end = q->size = 0;
}

bool queue_empty(queue q){
	return q.size == 0;
}
bool queue_full(queue q){
	return q.size == MAX_TAM;
}

bool queue_hitend(queue q){
	return q.end == (MAX_TAM-1);
}

bool queue_add(queue *q, t_data data){
	if(queue_full(*q)) return false;
	if(queue_hitend(*q)){
		int i;
		for(i=0 ; i<q->size ; i++) q->itens[i] = q->itens[i+q->start];
		q->end-=q->start;
		q->start = 0;
		q->itens[q->end] = data;
	}
	else q->itens[q->end] = data;
	
	q->end++;
	q->size++;
	return true;

}

bool queue_remove(queue *q, t_data * data){
	if(queue_empty(*q)) return false;
	*data = q->itens[q->start];
	q->start++;
	q->size--;
}

void queue_print(queue q){
	int i, j;
	
	for(i = q.start; i < q.end ; i++) {
		printf("%d ",q.itens[i]);
	}
}
