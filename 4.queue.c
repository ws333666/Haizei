/*************************************************************************
    > File Name: 4.queue.c
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年02月13日 星期四 19时12分01秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
typedef struct Queue {
	int *data;
	int head, tail, size, cnt;
} Queue;

Queue *init(int n) {
	Queue *q = (Queue *)malloc(sizeof(Queue));
	q->data = (int *)malloc(sizeof(int) * n);
	q->head = q->tail = q->cnt = 0;
	q->size = n;
	return q;
}

int empty(Queue *q) {
	return q->cnt == 0;
}

int front(Queue *q) {
	return q->data[q->head];
}

int expand(Queue *q) {
	int extr_size = q->size;
	int *p;
	while (extr_size) {
		p = (int *)malloc(sizeof(int) * (q->size + extr_size));
		if (p) break;
		extr_size /= 2;
	}
	if (p == NULL) return 0;
	for (int i = q->head, j = 0; j < q->cnt; j++) {
		p[j] = q->data[(i + j) % q->size];
	}
	q->size += extr_size;
	q->head = 0;
	q->tail = q->cnt;
	free(q->data);
	q->data = p;
	return 1;
}

int push(Queue *q, int val) {
	if (q == NULL) return 0;
	if (q->cnt == q->size) {
		if (!expand(q)) return 0;
		printf("expand successfully size = %d\n", q->size);
	}
	q->data[q->tail++] = val;
	if (q->tail == q->size) q->tail -= q->size;
	q->cnt += 1;
	return 1;
}

int pop(Queue *q) {
	if (q == NULL) return 0;
	if (empty(q)) return 0;
	q->head += 1;
	if (q->head == q->size) q->head -= q->size;
	q->cnt -= 1;
	return 1;
}

void output(Queue *q) {
	printf("Queue(%d) = [", q->cnt);
	for (int i = q->head, j = 0; j < q->cnt; j++) {
		j && printf(", ");
		printf("%d", q->data[(i + j) % (q->size)]);
	}
	printf("]\n");
	return ;
}

void clear(Queue *q) {
	if (q == NULL) return ;
	free(q->data);
	free(q);
	return ;
}

int main() {
	srand(time(0));
	#define max_op 20
	Queue *q = init(1);
	int op, val;
	for (int i = 0; i < 2 * max_op; i++) {
		op = rand() % 4;
		val = rand() % 100;
		switch (op) {
			case 0:
			case 1:
			case 2: {
				printf("push %d to Queue = %d\n", val, push(q, val));
			} break;
			case 3: {
				printf("pop %d to Queue = ", front(q)); 
				printf("%d\n", pop(q));
			} break;
		}
		output(q);
		printf("\n");
	}
	clear(q);
	return 0;
}
