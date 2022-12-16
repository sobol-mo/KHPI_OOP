#pragma once

#include "Exception.h"

template<typename Type>
class Array
{
private:

	//Покажчик на масив
	Type* array;

	//Розмір масиву
	int arraySize;

public:

	//Конструктор з параметром
	Array(const int arraySize);

	//Деструктор
	~Array();

	//Гетер для розміру масиву
	int getSize() const;

	//Перевантаження оператора[]
	Type& operator[](const int index);

	//Функція додавання числа
	void push(const Type number);
};
