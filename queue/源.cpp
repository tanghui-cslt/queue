
#include "QueueT.h"
#include <iostream>
using namespace std;



int main()
{
	QueueT head_queue ;
	init_queue(&head_queue);
	cout << head_queue.front << endl;

}