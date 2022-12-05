#pragma once

#include "Fruit.h"

class Banana : public Fruit
{
public:

	//Конструктор з параметрами
	Banana(const string& variety, const int price);

	//Перевизначення віртуальної функції друку інформації
	virtual void printInfo() const override;
};