#include "Stack.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void stack_test();

int main()
{
	stack_test();
}

void stack_test()
{
	Stack<int> int_stack;

	cout << "Stack is empty: " << (int_stack.is_empty() ? "yes" : "no") << endl << endl;

	cout << "Pushing 10 values [1-10]...\n";
	for (int i = 0; i < 10; i++)
		int_stack.push(i + 1);

	cout << "Size of the stack: " << int_stack.size() << endl;
	cout << "Top of the stack: " << int_stack.top() << endl << endl;

	cout << "Popping 5 values...\n";
	for (int i = 0; i < 5; i++)
		cout << "Value " << int_stack.pop() << " removed from the stack!\n";

	cout << "\nSize of the stack: " << int_stack.size() << endl;
	cout << "Top of the stack: " << int_stack.top() << endl << endl;
}
