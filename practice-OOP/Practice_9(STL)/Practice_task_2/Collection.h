#pragma once

#include <map>
#include "GemstoneInfo.h"
#include <utility>


template<typename Type>
class Collection
{
private:

	//Контейнер multimap, ключ - ціна,
	//значення - об'єкт з довільним 
	//типом даних
	multimap<int, Type> container;
	
public:

	//Конструктор за замовчуванням
	Collection();

	//Конструктор копіювання
	Collection(const Collection<Type>& object);

	//Функція додавання елемента
	void add(const int price, const Type& newElement);

	//Функція видалення елемента
	bool remove(const int price);

	//Функція очищення контейнера
	void clear();

	//Функція друку інформації
	void printCollection() const;

	//Перевантаження оператора(=)
	Collection<Type>& operator=(const Collection<Type>& object);

	//Перевантаження оператора(+)
	Collection<Type> operator+(const Collection<Type>& object);
};