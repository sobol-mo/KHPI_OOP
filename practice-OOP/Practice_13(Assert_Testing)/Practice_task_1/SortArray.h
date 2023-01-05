#pragma once  

#include <functional>  
#include <iostream>
#include <assert.h>

//Прототип функції з групою тестів
void testingSort();

//Прототип функції друку масиву
void printArray(const int* array,const int size);

//Клас-функтор
class SortArray {

public:

	//Шаблонне перевантаження оператора круглих дужок 
	template<typename Pred>
	void operator()(int* array, const int size, 
		Pred pred) const;
};

/*
	Реалізація перевантаження оператора круглих дужок
	Параметрами є:
	- покажчик на масив;
	- розмір;
	- предикат.
*/
template<typename Pred>
void SortArray::operator()(int* array, const int size,
	Pred pred) const
{

	int tempNumber = 0;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i; j < size; j++)
		{
			if (pred(array[i], array[j])) {
				
				tempNumber = *(array + i);
				*(array + i) = *(array + j);
				*(array + j) = tempNumber;
			}
		}
	}
}
