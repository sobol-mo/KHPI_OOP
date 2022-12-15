#include "Container.h"

//Явне оголошення шаблонів
template Container <Human>;
template Container <Employee>;
template Container <Teacher>;

//Конструктор за замовчуванням
template<typename Type>
inline Container<Type>::Container()
{
	this->array = nullptr;
	this->arraySize = 0;
}

//Деструктор
template<typename Type>
Container<Type>::~Container()
{

	//Якщо контейнер не пустий, звілнюємо пам'ять
	if (arraySize != 0) {

		//Звільнення пам'яті об'єктів
		for (int i = 0; i < arraySize; i++)
		{
			delete *(array + i);
		}

		//Звільнення пам'яті динамічного масиву
		delete[] array;
	}
}

//Перевантаження оператора(+=) 
template<typename Type>
Container<Type>& Container<Type>::operator+=(Type* newItem)
{

	//Тимчасовий масив
	Type** tempArray = new Type* [arraySize + 1];

	//Перезапис масиву з додаванням нового елемента
	for (int i = 0; i < arraySize; i++)
	{
		*(tempArray + i) = *(array + i);
	}
	*(tempArray + arraySize) = newItem;

	//Змінюємо розмір масиву
	arraySize++;

	if (array != nullptr)
		delete[] array;

	//Переставляємо покажчик на масив
	array = tempArray;

	//Якщо ланцюг додавань
	return *this;
}

//Перевантаження оператора квадратних дужок
template<typename Type>
Type& Container<Type>::operator[](const int index)
{
	if (index >= arraySize && index < 0)
		throw exception("Недоступний індекс!");

	return **(array + index);
}

//Функція вилучення елементу по індексу
template<typename Type>
Type* Container<Type>::getElement(const int index)
{
	if (arraySize == 0)
		throw exception("Контейнер пустий!");

	if (index >= arraySize && index < 0)
		throw exception("Недоступний індекс!");

	//Запам'ятовуємо адрес елементу
	Type* returnedElement = *(array + index);

	//Якщо розмір масиву не дорівнює 1, є можливість
	//створити масив на один елемент менший
	if (arraySize != 1) {
		Type** tempArray = new Type* [arraySize - 1];

		//Перезаписуємо всі елементи масиву крім видаляємого
		for (int i = 0, j = 0; i < arraySize - 1; i++, j++)
		{
			if (i == index) {
				j++;
			}
			*(tempArray + i) = *(array + j);
		}
		
		//Звільнення пам'яті
		delete[] array;
		
		//Переставляємо покажчик
		array = tempArray;
	}
	else {

		//Якщо розмір масиву дорівнює 1
		//видаляємо його та занулюємо
		delete[] array;
		array = nullptr;
	}

	//Зменшення розміру масиву
	arraySize--;

	//Повернення покажчика на об'єкт
	return returnedElement;
}

//Гетер для довжини контейнера
template<typename Type>
int Container<Type>::getSize() const
{
	return this->arraySize;
}