<h1>Stack Implementation Using Array in C++
</h1>
This repository contains an implementation of a stack data structure using an array in C++. A stack is a data structure that follows a Last-In-First-Out (LIFO) order, where elements are added and removed from the top of the stack. The implementation includes the following functions: push, isEmpty, pop, TopValue, Traverse, stackFull, and copyStack.
<h2>Usage</h2>
To use the stack implementation, follow these steps:

Clone the repository or download the source code.<br>
Include the header file stack.h in your C++ code.<br>
Create a stack object by calling the stack constructor.<br>
Use the push, isEmpty, pop, TopValue, Traverse, stackFull, and copyStack methods to manipulate the stack.<br>
Here's an example of how to use the stack implementation:<br>
```
#include "stack.h"
#include <iostream>

int main()
{
    // Create a stack object
    stack myStack;

    // Push some values onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    // Print the top value of the stack
    std::cout << myStack.TopValue() << std::endl; // Output: 3

    // Pop a value off the stack
    myStack.pop();

    // Print the top value of the stack again
    std::cout << myStack.TopValue() << std::endl; // Output: 2

    return 0;
}
```
<h2>Methods</h2>
The stack implementation provides the following methods:

<ul>
<li>stack(): Constructor that creates an empty stack.
<li>void push(int value): Adds a new element to the top of the stack.
<li>bool isEmpty(): Returns true if the stack is empty, false otherwise.
<li>int pop(): Removes and returns the top element from the stack.
<li>int TopValue(): Returns the value of the top element in the stack.
<li>void Traverse(): Prints the values of all elements in the stack.
<li>bool stackFull(): Returns true if the stack is full, false otherwise.
<li>void copyStack(stack& other): Copies the contents of the current stack to another stack.
	</ul>
