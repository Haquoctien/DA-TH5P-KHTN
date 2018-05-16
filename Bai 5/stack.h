#pragma once
struct Stack
{
	unsigned length;
	float data[100];
};

void stackInit(Stack &st)
{
	st.length = 0;
}

bool isEmpty(Stack st)
{
	return st.length == 0;
}

bool isFull(Stack st)
{
	return st.length == 100;
}

void push(Stack &st, float x)
{
	if (!isFull(st))
	{
		st.data[st.length] = x;
		st.length++;
	}
}

float pop(Stack &st)
{
	if (!isEmpty(st))
	{
		st.length--;
		return st.data[st.length];
	}
}
