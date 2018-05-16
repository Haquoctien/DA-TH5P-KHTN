#pragma once
#include <iostream>

struct Node {
	int info;
	Node *next;
	Node()
	{
		info = 0;
		next = NULL;
	}
	Node(int x)
	{
		info = x;
		next = NULL;
	}

};

struct List {
	Node *head, *tail;
	List()
	{
		head = tail = NULL;
	}
};

inline bool isEmpty(List list)
{
	return list.head == NULL;
}

void addHead(List &list, int x)
{
	Node * node = new Node(x);
	if (isEmpty(list))
	{
		list.head = list.tail = node;
		return;
	}
	node->next = list.head;
	list.head = node;
}

Node *popTail(List &list)
{
	if (isEmpty(list))
		return NULL;
	Node *p = list.tail;
	if (list.head == list.tail)
	{
		list.head = list.tail = NULL;
	}
	else
	{
		Node *nextToTail = list.head;
		while (nextToTail->next != list.tail)
		{
			nextToTail = nextToTail->next;
		}
		nextToTail->next = NULL;
		list.tail = nextToTail;
	}
	return p;
}

#define Queue List
#define enqueue addHead
#define dequeue popTail