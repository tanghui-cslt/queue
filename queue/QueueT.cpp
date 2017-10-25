#include "QueueT.h"
#include <iostream>

void init_queue(pqueue p_queue, int len)
{
	p_queue->front = 0;
	p_queue->rear = 0;
	p_queue->queue = new node[len];
	p_queue->max_size = len;
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
	if (p_queue->front == p_queue->rear)    //�ж��Ƿ�Ϊ��  
		return true;
	else
		return false;
}
bool isfull(pqueue p_queue)
{
	if (p_queue->front == (p_queue->rear + 1) % p_queue->max_size)    //�ж�ѭ�������Ƿ�������һ��Ԥ���ռ䲻��  
		return true;
	else
		return false;
}
void traverse_queue(pqueue p_queue)
{
	int i = p_queue->front;
	printf("���е�Ԫ����:\n");
	while (i%p_queue->max_size != p_queue->rear)
	{
		printf("%d ", p_queue->queue[i].index);
		i++;
	}
	printf("\n");
}
void  delete_queue(pqueue p_queue)
{
	delete [] p_queue->queue;
}