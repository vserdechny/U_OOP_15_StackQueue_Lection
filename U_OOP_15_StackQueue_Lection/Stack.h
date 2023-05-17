#pragma once
#include <stdexcept>
#include <list>

/*
	Dynamic Stack Implementation
	Author: Serdechny V.S.
	Date: 17.05.2023
*/

using std::list;

template <typename Type>
class Stack
{
private:
	list<Type> _values; //doubly-linked list to store values

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
	//Pushes a new value onto the stack.This value becomes the top of the stack
	void push(const Type& value)
	{
		_values.push_back(value);
	}
	//Removes the top of the stack
	Type pop()
	{
		if (_values.size() == 0)
			throw std::out_of_range("There is no values in the stack!");

		auto value = _values.back();
		_values.pop_back();
		return value;
	}
	//Returns the top of the stack
	const Type& top()const
	{
		if (_values.size() == 0)
			throw std::out_of_range("There is no values in the stack!");
		return _values.back();
	}
};
