#pragma once
#include <stdexcept>
#include <list>

/*
	Simple Queue Implementation
	Author: Serdechny V.S.
	Date: 17.05.2023
*/

using std::list;

template <typename Type>
class Queue
{
private:
	list<Type> _values;

public:
	//Methods
	//**********************************

	//Returns true if the stack is empty
	bool is_empty()const
	{
		return _values.size() == 0;
	}
	//Returns size of the stack
	size_t size()const
	{
		return _values.size();
	}
	//Inserts a new value at the tail of the queue
	void enqueue(const Type& value)
	{
		_values.push_back(value);
	}
	//Removes an element from the head of the queue
	Type dequeue()
	{
		if (_values.size() == 0)
			throw std::out_of_range("There is no values in the stack!");

		auto value = _values.front();
		_values.pop_front();
		return value;
	}
	//Returns the value at the head of the queue
	const Type& front()const
	{
		if (_values.size() == 0)
			throw std::out_of_range("There is no values in the stack!");
		return _values.front();
	}
	//Returns the value at the tail of the queue
	const Type& rear()const
	{
		if (_values.size() == 0)
			throw std::out_of_range("There is no values in the stack!");
		return _values.back();
	}
};