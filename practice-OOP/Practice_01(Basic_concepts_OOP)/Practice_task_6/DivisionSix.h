#pragma once

#include <iostream>
#include <Windows.h>
using namespace std;

class DivisionSix
{
private:
	int sum; //Сума чисел
	int rightIndex; //Права межа
	int leftIndex; //Ліва межа
	const int Number = 6; //Дільник

public:
	//Конструктор за замовчуванням
	DivisionSix(); 

	//Сетер для правої межі
	void setRightIndex(const int index);

	//Метод для підрахунку суми
	int calculateSum();
};

