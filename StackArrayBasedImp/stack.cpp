#include "stack.h"
#include <iostream>
using namespace std;

stack::stack()
{
	top = -1;
}

void stack::push(int value)
{
	if (top >= Max - 1) {
		cout << "Stack Full";
	}
	else
	{
		top++;
		item[top] = value;
	}
}

bool stack::isEmpty()
{
	return top < 0;
}

int stack::pop()
{
	if (isEmpty())
		cout << "Can't delete item";
	else {
		top--;
		return item[top + 1];
	}
}

int stack::TopValue()
{
	

	return item[top];
}

void stack::Traverse()
{
	for (int i = 0; i <= top; i++)
	{
		cout << item[i] << "\n";
	}
}

bool stack::stackFull()
{
	return (top==Max-1);
}




void stack::copyStack(stack& other)
{
	stack temp;

	while (!isEmpty())
	{
		temp.push(TopValue());
		pop();
	}

	while (!temp.isEmpty())
	{
		other.push(temp.pop());
	}
}


