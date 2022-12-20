#include "MyArray.h"

//Функція для отримання випадкового числа
int randomNumber(const int min, const int max) {
	
	int randNum = rand() % (max - min) + min;
	return randNum;
}

//Конструктор за замовчуванням
MyArray::MyArray():
	sizeArr(10)
{
	this->array = new int[sizeArr];
	for (int i = 0; i < sizeArr; i++)
	{
		*(array + i) = randomNumber(1, 30);
	}
}

//Конструктор з параметрами
MyArray::MyArray(const int size, const bool type):
	sizeArr(size)
{
	this->array = new int[sizeArr];

	if (type == 0) {
		for (int i = 0; i < sizeArr; i++)
		{
			cout << "Елемент " << i << ":";
			cin >> *(array + i);
		}
	}
	else {
		for (int i = 0; i < sizeArr; i++)
		{
			*(array + i) = randomNumber(1, 30);
		}
	}
}

//Деструктор
MyArray::~MyArray()
{
	delete[] this->array;
}

//Метод друку масиву
void MyArray::printArray() const
{
	cout << "Масив: ";
	for (int i = 0; i < sizeArr; i++)
	{
		cout << setw(4) << *(array + i);
	}
}

//Метод додавання числа в кінець масиву
void MyArray::pushBack(const int number)
{
	int* tempArr = new int[sizeArr + 1];

	for (int i = 0; i < sizeArr; i++)
	{
		*(tempArr + i) = *(array + i);
	}
	*(tempArr + sizeArr) = number;

	delete[] this->array;
	this->array = tempArr;
	this->sizeArr++;
}

//Метод сортування масиву
//Продемонстровано сортування Шелла
void MyArray::sortArray()
{
	int i = 0, j = 0;
	int step = 0;
	int temp = 0;

	for (step = sizeArr / 2; step > 0; step /= 2) {
		for (i = step; i < sizeArr; i++)
		{
			temp = array[i];
			for (j = i; j >= step; j -= step)
			{
				if (temp < array[j - step])
					array[j] = array[j - step];
				else
					break;
			}
			array[j] = temp;
		}
	}
}