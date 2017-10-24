#include "QueueT.h"

void init_queue(pqueue p_queue)
{
	p_queue->front = 0;
	p_queue->rear = 0;
	p_queue->queue = new node[MAX_SIZE];

}