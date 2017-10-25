#include "QueueT.h"
#include <iostream>
using namespace std;

void init_array(int  R[][9]);
void merge_set(pqueue p_queue);

int main()
{
	int queue_len = 10;
	int R[9][9] = { 0 };
	
	QueueT head_queue ;								
	int newer[9], result[9];						//存储结果
	
	init_queue(&head_queue,queue_len);				//初始化循环队列 空出一个元素

	init_array(R);									//init array

	for (size_t i = 0; i < queue_len-1; i++)		//Init the queue
	{
		node temp_nope;
		temp_nope.index = i;
		enqueue(&head_queue, temp_nope);
	}
	
	merge_set(&head_queue,R);

	for (size_t i = 0; i < 9; i++)
	{
		for (size_t j = 0;  j < 9;  j++)
		{
			cout << R[i][j] << " ";
		}
		cout << endl;
	}

	getchar();

}

void init_array(int R[][9])
{
	int arr[13][2] = { {2,8}, {9,4}, {2,9}, {2,1}, {2,5}, {6,2}, {5,9},
		{5,6}, {5,4}, {7,5}, {7,6}, {3,7}, {6,3} };
	for (size_t i = 0; i < 13; i++)
	{
		R[arr[i][0] - 1][arr[i][1] - 1] = 1;
		R[arr[i][1] - 1][arr[i][0] - 1] = 1;
	}
}

void merge_set(pqueue p_queue)
{

}