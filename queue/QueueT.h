#ifndef _QUEUET_H_
#define _QUEUET_H_

#define MAX_SIZE 100

typedef struct node
{
	int index;

}*pnode;

typedef struct QueueT {
	pnode queue;
	int front;
	int rear;
}*pqueue;
/*
设计一个循环队列
*/
void init_queue(pqueue p_queue);
bool enqueue(pqueue p_queue);
bool dequeue(pqueue p_queue);
bool is_empty(pqueue p_queue);
bool is_full(pqueue p_queue);
void traverse_queue(pqueue p_queue);

#endif