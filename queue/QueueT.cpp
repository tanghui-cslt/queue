#include "QueueT.h"

void init_queue(pqueue p_queue)
{
	p_queue->front = 0;
	p_queue->rear = 0;
	p_queue->queue = new node[MAX_SIZE];

}
bool enqueue(pqueue p_queue)
{

}
bool dequeue(pqueue p_queue)
{

}
bool is_empty(pqueue p_queue)
{
	if (p_queue->rear = p_queue->front)
	{
		return true;
	}
	return false;
}
bool is_full(pqueue p_queue)
{
	if ((p_queue->rear+1)%MAX_SIZE == p_queue->front)
	{
		return true;
	}
	return false;
}
void traverse_queue(pqueue p_queue)
{

}