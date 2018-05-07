struct Stack
{
	unsigned length;
	int data[100];
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

bool push(Stack &st, int x)
{
	if (!isFull(st))
	{
		st.data[st.length] = x;
		st.length++;
	}
}

bool pop(Stack &st, int x)
{
	if (!isEmpty(st))
	{
		st.length--;
		return st.data[st.length];
	}
}
