#pragma once

#include "Teacher.h"

template<typename Type>
class Container
{
private:

	//Масив покажчиків
	Type** array;

	//Розмір масиву
	int arraySize;

public:

	//Конструктор за замовчуванням
	Container();

	//Деструктор
	~Container();

	//Перевантаження оператора(+=) 
	Container<Type>& operator+=(Type* newItem);

	//Перевантаження оператора квадратних дужок
	Type& operator[](const int index);

	//Функція вилучення елементу по індексу
	Type* getElement(const int index);

	//Гетер для довжини контейнера
	int getSize() const;
};