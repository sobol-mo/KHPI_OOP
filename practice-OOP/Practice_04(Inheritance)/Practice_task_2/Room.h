#pragma once

#include <Windows.h>
#include <iostream>
#include "Figure.h"
#include "CostSquareMeter.h"

using namespace std;

class Room : public Figure, public CostSquareMeter
{
private:

	//Висота кімнати 
	int height;

public:

	//Конструктор з параметрами
	Room(const int rLength = 1, const int rWidth = 1,
		const int rHeight = 2);

	//Функція підрахунку площі 
	int getSquare() const;

	//Функція підрахунку ціни площі
	int getCostSquare() const;

	//Функція підрахунку об'єму кімнати
	int getRoomVolume() const;

	//Гетер висоти кімнати
	int getHeight() const;

	//Сетер висоти кімнати
	void setHeight(const int height);
};