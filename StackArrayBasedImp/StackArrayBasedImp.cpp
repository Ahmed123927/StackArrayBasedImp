#include <iostream>
using namespace std;
#include "stack.h"
int main()
{
	stack s; 
	stack s2;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	cout << s.TopValue()<<"\n";

	s.copyStack(s2);

	s2.Traverse();










}

