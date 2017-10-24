#include "QueueT.h"


void init_queue(pqueue p_queue)
{
	p_queue->front = 0;
	p_queue->rear = 0;
	p_queue->queue = new node[MAX_SIZE];
	p_queue->max_size = MAX_SIZE;

}

bool enqueue(pqueue p_queue, node en_queue)
{

	if (isfull(p_queue))
		return false;
	else
	{
		p_queue->queue[p_queue->rear] = en_queue;
		p_queue->rear = (p_queue->rear + 1) % p_queue->max_size;
		return true;
	}
}
bool dequeue(pqueue p_queue, pnode de_queue)
{
	if (isempty(p_queue))
	{
		return false;
	}
	else
	{
		*de_queue = p_queue->queue[p_queue->front];
		p_queue->front = (p_queue->front + 1) % p_queue->max_size;
		return true;
	}
}
bool isempty(pqueue p_queue)
{
	if (p_queue->front == p_queue->rear)    //判断是否为空  
		return true;
	else
		return false;
}
bool isfull(pqueue p_queue)
{
	if (p_queue->front == (p_queue->rear + 1) % p_queue->max_size)    //判断循环链表是否满，留一个预留空间不用  
		return true;
	else
		return false;
}
void traverse_queue(pqueue p_queue)
{
	int i = p_queue->front;
	/*printf("队中的元素是:\n");
	while (i%p_queue->max_size != p_queue->rear)
	{
		printf("%d ", p_queue->queue[i].index);
		i++;
	}
	printf("\n");*/
}
void  delete_queue(pqueue p_queue)
{
	delete [] p_queue->queue;
}