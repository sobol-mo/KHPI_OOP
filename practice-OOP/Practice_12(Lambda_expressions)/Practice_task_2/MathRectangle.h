#pragma once

#include <iostream>
using namespace std;

class MathRectangle
{
private:

	//Ширина
	int width;

	//Висота
	int height;

public:

	//Конструктор з параметрами за замовчуванням
	MathRectangle(const int width = 0,
	              const int height = 0);

	//Гетери для полів класу
	int getWidth() const;
	int getHeight() const;
		
	//Функція підрахунку площі
	int getArea() const;

	//Перевантаження оператора(>>)
	friend istream& operator>>(istream& in, MathRectangle& rectangle);
};