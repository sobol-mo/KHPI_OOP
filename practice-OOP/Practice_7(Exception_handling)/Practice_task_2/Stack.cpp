#include "Stack.h"

//Конструктор з параметром
Stack::Stack(const int stackSize)
{
	this->stackSize = stackSize;
	this->amountOfElements = 0;
	this->stack = new int[stackSize]{};
}

//Деструктор
Stack::~Stack()
{
	delete[] stack;
}

//Функція додавання елементу
void Stack::push(const int number)
{
	if (amountOfElements == stackSize)
		throw exception("Стек заповнений!");

	*(this->stack + amountOfElements++) = number;
}

//Функція вилучення елементу
int Stack::pop()
{
	if (amountOfElements == 0)
		throw exception("Стек пустий!");

	return *(this->stack + --amountOfElements);
}

//Функція друку елементу
void Stack::printStack() const
{
	if (amountOfElements == 0)
		throw exception("Стек пустий!");

	for (int i = amountOfElements - 1; i >= 0; i--)
	{
		cout << *(this->stack + i) << endl;
	}
}
