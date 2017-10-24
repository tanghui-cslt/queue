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
	int max_size;
}*pqueue;
/*
设计一个循环队列
*/
extern void init_queue(pqueue p_queue);
extern bool enqueue(pqueue p_queue,node en_queue);
bool dequeue(pqueue p_queue,pnode de_queue);
bool isempty(pqueue p_queue);
bool isfull(pqueue p_queue);
void traverse_queue(pqueue p_queue);
void delete_queue(pqueue p_queue);

#endif