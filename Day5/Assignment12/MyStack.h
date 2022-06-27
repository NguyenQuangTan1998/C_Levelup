#pragma once

#include<iostream>

template<class T>
class MyStack
{
private:
	T* arr;
	int top;
	int size;
public:
	MyStack(int s)
	{
		arr = new int[s];
		size = s;
		top = -1;
	}
	bool isFull()
	{
		if (top == (size - 1))
			return true;
		else
			return false;
	}
	void push(int val)
	{
		if (isFull())
			std::cout << "Stack is FULL!\n";
		else
		{
			top++;
			arr[top] = val;
		}
	}
	bool  isEmpty()
	{
		if (top == -1)
			return true;
		else
			return false;
	}
	T pop()
	{
		if (isEmpty()) {
			std::cout << "Stack is Empty!\n";
			return -1;
		}
		else {
			T val = arr[top];
			top--;
			return val;
		}
	}
	T peek()
	{
		if (isEmpty()) {
			std::cout << "Satck is Empty!\n";
		}
		else {
			return arr[top];
		}
	}
	~MyStack()
	{
		delete[] arr;
	}
};

