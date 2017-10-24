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

void init_queue(pqueue p_queue);

#endif