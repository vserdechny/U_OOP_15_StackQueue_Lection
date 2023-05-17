#pragma once
#include <stdexcept>
#include <list>

/*
	Priority Queue Implementation
	Author: Serdechny V.S.
	Date: 17.05.2023
*/

using std::list;
using std::pair;

template <typename Type>
class PriorityQueue
{
private:
	list<pair<Type, int>> _values;

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
	//Inserts a new value and its priority at the tail of the queue
	void enqueue(const Type& value, int priority)
	{
		_values.push_back(pair<Type, int>(value, priority));
	}
	//Removes an element with the highest priority
	Type dequeue()
	{
		if (_values.size() == 0)
			throw std::out_of_range("There is no values in the stack!");

		int max_pr = _values.front().second;
		auto it = _values.begin();
		for (auto v = _values.begin(); v != _values.end(); v++)
		{
			if ((*v).second > max_pr)
			{
				max_pr = (*v).second;
				it = v;
			}
		}
		auto value = (*it).first;
		_values.erase(it);
		return value;
	}

	//Returns the value at the head of the queue
	const Type& front()const
	{
		if (_values.size() == 0)
			throw std::out_of_range("There is no values in the stack!");
		return _values.front().first;
	}
	//Returns the value at the tail of the queue
	const Type& rear()const
	{
		if (_values.size() == 0)
			throw std::out_of_range("There is no values in the stack!");
		return _values.back().first;
	}
};