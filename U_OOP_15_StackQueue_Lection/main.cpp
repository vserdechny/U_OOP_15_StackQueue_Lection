#include "Stack.h"
#include "PriorityQueue.h"
#include "Queue.h"
#include "CircularQueue.h"
#include <queue>
#include <stack>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::stack;
using std::queue;
using std::priority_queue;

void queue_test();
void queue_def_test();
void p_queue_test();
void p_queue_def_test();
void c_queue_test();
void stack_test();
void stack_def_test();

int main()
{
	//stack_test();
	//stack_def_test();
	//queue_test();
	//queue_def_test();
	//p_queue_test();
	//p_queue_def_test();
	c_queue_test();
}

void c_queue_test()
{
	CircularQueue<int> c_queue;

	for (int i = 0; i < 10; i++)
		c_queue.enqueue(i);

	cout << "Size of the queue: " << c_queue.size() << endl;
	cout << "Head of the queue: " << c_queue.head() << endl;
	cout << "Tail of the queue: " << c_queue.rear() << endl << endl;

	c_queue.enqueue(10);

	cout << "Size of the queue: " << c_queue.size() << endl;
	cout << "Head of the queue: " << c_queue.head() << endl;
	cout << "Tail of the queue: " << c_queue.rear() << endl << endl;

	c_queue.enqueue(20);

	cout << "Size of the queue: " << c_queue.size() << endl;
	cout << "Head of the queue: " << c_queue.head() << endl;
	cout << "Tail of the queue: " << c_queue.rear() << endl << endl;

	c_queue.dequeue();
	c_queue.dequeue();

	cout << "Size of the queue: " << c_queue.size() << endl;
}
void p_queue_test()
{
	PriorityQueue<int> q;

	q.enqueue(10, 2);
	q.enqueue(2, 3);
	q.enqueue(5, 3);
	q.enqueue(100, 1);

	cout << "Size of the queue: " << q.size() << endl;
	cout << "Head of the queue: " << q.front() << endl;
	cout << "Tail of the queue: " << q.rear() << endl << endl;

	cout << "Value " << q.dequeue() << " removed from the queue!\n";
	cout << "Value " << q.dequeue() << " removed from the queue!\n";

	cout << "Size of the queue: " << q.size() << endl;
	cout << "Head of the queue: " << q.front() << endl;
	cout << "Tail of the queue: " << q.rear() << endl << endl;
}
void p_queue_def_test()
{
	priority_queue<int> q;

	q.push(1);
	q.push(10);
	q.push(3);

	cout << "Head of the queue: " << q.top() << endl;

	cout << "Popping 1 value...\n";
	q.pop();

	cout << "Head of the queue: " << q.top() << endl;
}
void queue_test()
{
	Queue<int> int_queue;

	cout << "Queue is empty: " << (int_queue.is_empty() ? "yes" : "no") << endl << endl;

	cout << "Enqueue 10 values [1-10]...\n";
	for (int i = 0; i < 10; i++)
		int_queue.enqueue(i + 1);

	cout << "Size of the queue: " << int_queue.size() << endl;
	cout << "Head of the queue: " << int_queue.front() << endl;
	cout << "Tail of the queue: " << int_queue.rear() << endl << endl;

	cout << "Dequeue 5 values...\n";
	for (int i = 0; i < 5; i++)
		cout << "Value " << int_queue.dequeue() << " removed from the queue!\n";

	cout << "Size of the queue: " << int_queue.size() << endl;
	cout << "Head of the queue: " << int_queue.front() << endl;
	cout << "Tail of the queue: " << int_queue.rear() << endl << endl;
}
void queue_def_test()
{
	queue<int> int_queue;

	cout << "Queue is empty: " << (int_queue.empty() ? "yes" : "no") << endl << endl;

	cout << "Enqueue 10 values [1-10]...\n";
	for (int i = 0; i < 10; i++)
		int_queue.push(i + 1);

	cout << "Size of the queue: " << int_queue.size() << endl;
	cout << "Head of the queue: " << int_queue.front() << endl;
	cout << "Tail of the queue: " << int_queue.back() << endl << endl;

	cout << "Dequeue 5 values...\n";
	for (int i = 0; i < 5; i++)
		int_queue.pop();

	cout << "Size of the queue: " << int_queue.size() << endl;
	cout << "Head of the queue: " << int_queue.front() << endl;
	cout << "Tail of the queue: " << int_queue.back() << endl << endl;
}
void stack_def_test()
{
	stack<int> int_stack;

	cout << "Stack is empty: " << (int_stack.empty() ? "yes" : "no") << endl << endl;

	cout << "Pushing 10 values [1-10]...\n";
	for (int i = 0; i < 10; i++)
		int_stack.push(i + 1);

	cout << "Size of the stack: " << int_stack.size() << endl;
	cout << "Top of the stack: " << int_stack.top() << endl << endl;

	cout << "Popping 5 values...\n";
	for (int i = 0; i < 5; i++)
		int_stack.pop();

	cout << "\nSize of the stack: " << int_stack.size() << endl;
	cout << "Top of the stack: " << int_stack.top() << endl << endl;
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
