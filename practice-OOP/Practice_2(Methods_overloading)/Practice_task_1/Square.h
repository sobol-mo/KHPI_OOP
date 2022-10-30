#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;

class Square
{
private:
	int side;

public:
	//Конструктор за замовчуванням
	Square();

	//Конструктор з параметрами
	Square(const int side);

	//Конструктор копіювання
	Square(const Square& sqre);

	//Група гетерів
	int getSide() const;
	void setSide(const int side);

	//Перевантаження через метод класу
	Square operator+(const Square& sqre);
	Square operator-(const Square& sqre);
	Square operator*(const Square& sqre);
	Square operator=(const Square& sqre);
};