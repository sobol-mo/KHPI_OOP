#pragma once

#include <iostream>
#include <Windows.h>
using namespace std;

class DivisionSix
{
private:
	int m_sum; //Сума чисел
	int m_rightIndex; //Права межа
	int m_leftIndex; //Ліва межа
	const int m_Number = 6; //Число на яке ділимо

public:
	//Конструктор за замовченням
	DivisionSix(); 
	//Сетер для правої межі
	void setRightIndex(const int index);
	//Метод для підрахунку суми
	int calculateSum();
};

