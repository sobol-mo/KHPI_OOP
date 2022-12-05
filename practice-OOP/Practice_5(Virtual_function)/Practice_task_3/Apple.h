#pragma once

#include "Fruit.h"

class Apple : public Fruit
{
public:

	//Конструктор з параметроми
	Apple(const string& variety, const int price);

	//Перевизначення віртуальної функції друку інформації
	virtual void printInfo() const override;
};