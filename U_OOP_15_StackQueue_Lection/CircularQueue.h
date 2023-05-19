#pragma once
#include <stdexcept>

/*
	Circular Queue Implementation
	Author: Serdechny V.S.
	Date: 17.05.2023
*/

template <typename Type, size_t _capacity = 10>
class CircularQueue
{
private:
	int _head{ -1 }, _rear{ -1 };
	Type _values[_capacity];

public:
	//Methods
	//**********************************
	
	//Returns true if the queue is empty
	bool is_empty()const
	{
		return _head == -1;
	}
	//Returns size of the queue
	size_t size()const
	{
		if (_head == -1)
			return 0;
		else if (_rear >= _head)
			return _rear - _head + 1;
		else
			return _capacity - _head + _rear + 1;
	}
	//Inserts a new value and at the tail of the queue
	void enqueue(const Type& value)
	{
		if (_head == -1)
		{
			_values[++_head] = value;
			_rear = _head;
		}
		else if (_rear < _capacity - 1)
		{
			_values[++_rear] = value;
		}
		else if (_rear == _capacity - 1 && _head != 0)
		{
			_rear = 0;
			_values[_rear] = value;
		}
		else
		{
			throw std::out_of_range("Queue is full!");
		}
	}

	//Removes an element from the head of the queue
	Type dequeue()
	{
		if (_head == -1)
			throw std::out_of_range("Queue is empty!");
		else
		{
			auto index = _head;

			if (_head == _rear)
				_head = _rear = -1;
			else if (_head < _capacity - 1)
				_head++;
			else
				_head = 0;

			return _values[index];
		}
	}
	//Returns the value at the head of the queue
	const Type& head()const
	{
		if (_head == -1)
			throw std::out_of_range("There is no values in the queue!");
		return _values[_head];
	}
	//Returns the value at the tail of the queue
	const Type& rear()const
	{
		if (_head == -1)
			throw std::out_of_range("There is no values in the queue!");
		return _values[_rear];
	}
};