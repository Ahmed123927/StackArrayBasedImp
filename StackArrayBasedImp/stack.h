#pragma once
const int Max=10;
class stack
{
	int top;
	int item[Max];

public:
	stack();
	void push(int value);
	bool isEmpty();
	int pop();
	int TopValue();
	void Traverse();
	bool stackFull();
	void copyStack(stack& other);


};

