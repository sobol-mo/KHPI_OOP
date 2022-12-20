#include "Array.h"

//Явне оголошення шаблонів
template Array<int>;
template Array<float>;

//Конструктор з параметром
template<typename Type>
Array<Type>::Array(const int arraySize)
{
	if (arraySize < 1)
		throw Exception("Некоректний розмір масиву!");

	this->arraySize = arraySize;
	this->array = new Type[arraySize];

	for (int i = 0; i < arraySize; i++)
		*(array + i) = (Type)((i + 1) * 1.1);
}

//Деструктор
template<typename Type>
Array<Type>::~Array()
{
	delete[] this->array;
}

//Гетер для розміру масиву
template<typename Type>
int Array<Type>::getSize() const
{
	return this->arraySize;
}

//Перевантаження оператора[]
template<typename Type>
Type& Array<Type>::operator[](const int index)
{
	if (index < 0 && index >= arraySize)
		throw Exception("Некоректний індекс!");

	return *(array + index);
}

//Функція додавання числа
template<typename Type>
void Array<Type>::push(const Type number)
{
	Type* tempArray = new Type[arraySize + 1];

	for (int i = 0; i < arraySize; i++)
		*(tempArray + i) = *(array + i);
	
	*(tempArray + arraySize) = number;

	delete[] this->array;
	this->array = tempArray;
	this->arraySize++;
}