#pragma once


#include <iostream>
#include <fstream>

using namespace std;

class ArrayInt
{
private:

	//Масив
	int* array;

	//Розмів масиву
	int arraySize;

public:

	//Конструктор за замовчуванням
	ArrayInt();

	//Конструктор з параметрами
	ArrayInt(int* array, int arraySize);

	//Деструктор
	~ArrayInt();

	//Гетер для довжини масиву
	int getSize() const;

	//Функція запису масиву у файл
	void arrayToBinFile(const string& path) const;

	//Функція зчитування масиву з файлу
	void readArrayFromBinFile(const string& path);

	//Функція зміни масиву у файлі
	void changingArrayInFile(const string& path) const;

	//Перевантаження оператора([])
	int& operator[] (const int index) const;
};