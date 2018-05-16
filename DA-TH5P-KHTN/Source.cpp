#include "stack.h"
#include <iostream>
using namespace std;

int main(void)
{
	Stack myStack;
	stackInit(myStack);
	push(myStack, 2);
	push(myStack, 26);
	push(myStack, 6);
	push(myStack, 9);
	push(myStack, 1);
	push(myStack, 7);
	push(myStack, 8);
	cout << "Bai 1, dung mang de cai dat queue: " << endl;
	while (!isEmpty(myStack))
	{
		cout << pop(myStack) << "  ";
	}
	cout << endl;
	system("pause");
	return 0;
}