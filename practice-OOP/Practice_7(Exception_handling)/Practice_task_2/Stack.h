#pragma once

#include <iostream>
using namespace std;

class Stack
{
private:

	//Стек
	int* stack;

	//Ємність стеку
	int stackSize;

	//Фактичний розмір стеку
	int amountOfElements;

public:

	//Конструктор з параметром
	Stack(const int stackSize);

	//Деструктор
	~Stack();

	//Функція додавання елементу
	void push(const int number);

	//Функція вилучення елементу
	int pop();

	//Функція друку елементу
	void printStack() const;
};