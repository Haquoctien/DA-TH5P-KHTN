#pragma once
#include <iostream>
// implement stack using sll
struct intNode {
	int integer;
	intNode *next;
};

struct intNodeList {
	intNode *head;
	intNode *tail;
};

//prototypes
void addHead(intNodeList&, int);
intNode *popHead(intNodeList &);
void intNodeListInit(intNodeList&);
intNode *newNode(int);
bool isEmpty(intNodeList list);

#define Stack intNodeList
#define push addHead
#define pop popHead
#define stackInit intNodeListInit

void addHead(intNodeList& list, int x)
{
	intNode * node = newNode(x);
	if (list.head == NULL)
	{
		list.head = list.tail = node;
		return;
	}
	node->next = list.head;
	list.head = node;
}
intNode *popHead(intNodeList &list)
{
	if (list.head == NULL)
		return NULL;
	intNode* p;
	if (list.head == list.tail)
	{
		p = list.head;
		list.head = list.tail = NULL;
		return p;
	}
	p = list.head;
	list.head = list.head->next;
	p->next = NULL;
	return p;
}
void intNodeListInit(intNodeList& list)
{
	list.head = list.tail = NULL;
}
intNode *newNode(int x)
{
	intNode * p = new intNode;
	if (p)
	{
		p->integer = x;
		p->next = NULL;
	}
	return p;
}

inline bool isEmpty(intNodeList list)
{
	return list.head == NULL;
}
