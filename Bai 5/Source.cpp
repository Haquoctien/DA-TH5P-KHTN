#include <iostream>
#include "stack.h"
#include <string>
using namespace std;
int tokenizer(const string &, string *);
float evaluatePostfixExpr(string [], int);
int main(void)
{
	string str;
	cout << "Nhap bieu thuc hau to: ";
	getline(cin, str);
	string expr[50];
	int n = tokenizer(str, expr);
	float ans = evaluatePostfixExpr(expr, n);
	cout << "Ket qua bieu thuc hau to la: " << ans << endl;
	system("pause");
	return 0;
}

int tokenizer(const string &expr, string array[])
{
	unsigned length = expr.length();
	char c[2];
	c[1] = '\0';
	int j = 0;
	for (int i = 0; i < length; i++)
	{
		c[0] = expr[i];
		if (c[0] == ' ')
		{
			j++;
		}
		else
		{
			array[j] += string(c);
		}
	}
	return j+1;
}

float evaluatePostfixExpr(string expr[], int n)
{
	Stack stack;
	stackInit(stack);
	string temp;
	for (int i = 0; i < n; i++)
	{
		temp = expr[i];
		if (temp == "+")
		{
			float temp1 = pop(stack) + pop(stack);
			push(stack, temp1);
		}
		else if (temp == "-")
		{
			float temp1 = pop(stack) - pop(stack);
			push(stack, -temp1);
		}
		else if (temp == "*")
		{
			float temp1 = pop(stack) * pop(stack);
			push(stack, temp1);
		}
		else if (temp == "/")
		{
			float temp1 = float(pop(stack)) / pop(stack);
			push(stack, 1/temp1);
		}
		else
		{
			push(stack, atoi(temp.c_str()));
		}
	}
	return pop(stack);
}