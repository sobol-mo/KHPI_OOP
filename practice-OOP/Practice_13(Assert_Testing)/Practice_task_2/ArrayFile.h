#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <assert.h>
using namespace std;

//Функція тестування вектора
void testingVector(const vector<int> vectorInt);

class ArrayFile
{
private:

	//Шлях до файлу
	string path;

public:

	//Конструктор з параметром
	ArrayFile(const string& path);

	//Сетер для поля 
	void setPath(const string& path);

	//Функція зчитування масиву з файлу
	vector<int> getArray() const;

	//Функція заміни масива у файлі
	void setArray(const vector<int> vectorInt) const;
};