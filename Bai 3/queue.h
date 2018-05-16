#pragma once
#include <iostream>

struct Queue {
	unsigned length;
	int a[100];
};

void queueInit(Queue &qu)
{
	qu.length = 0;
}

bool isEmpty(const Queue &qu)
{
	return qu.length == 0;
}

bool isFull(const Queue &qu)
{
	return qu.length == 100;
}

void enqueue(Queue &qu, int x)
{
	if (!isFull(qu))
	{
		qu.a[qu.length] = x;
		qu.length++;
	}
}

int dequeue(Queue &qu)
{
	if (!isEmpty(qu))
	{
		int x = qu.a[0];
		for (int i = 0; i < qu.length - 1; i++)
		{
			qu.a[i] = qu.a[i + 1];
		}
		qu.length--;
		return x;
	}
}