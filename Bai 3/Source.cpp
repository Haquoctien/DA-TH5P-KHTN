#include "queue.h"
#include <iostream>
using namespace std;

int main(void)
{
	Queue myQueue;
	queueInit(myQueue);
	enqueue(myQueue, 2);
	enqueue(myQueue, 26);
	enqueue(myQueue, 6);
	enqueue(myQueue, 9);
	enqueue(myQueue, 1);
	enqueue(myQueue, 7);
	enqueue(myQueue, 8);
	cout << "Bai 3, dung mang de cai dat queue: " << endl;
	while (!isEmpty(myQueue))
	{
		cout << dequeue(myQueue) << "  ";
	}
	cout << endl;
	system("pause");
	return 0;
}