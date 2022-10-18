#pragma once

#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

class MyArray
{
private: 
	int* m_array;
	int m_sizeArr;

public:
	//Конструктор за замовченням
	MyArray();
	//Конструктор з параметрами
	MyArray(const int size,const bool type);
	//Деструктор
	~MyArray();

	//Метод друку масиву
	void printArray() const;
	//Метод додавання числа в кінець масиву
	void pushBack(const int number);
	//Метод сортування масиву
	void sortArray();
};

//Функція для отримання ранд. числа
int randomNumber(const int min, const int max);