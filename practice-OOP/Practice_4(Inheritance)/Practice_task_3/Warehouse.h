#pragma once

#include "Toy.h"

class Warehouse : public Toy
{
private:

	//Кількість іграшок на складі
	int count;

	//Повна ціна
	int fullPrice;

public:

	//Конструктор з параметром
	Warehouse(const int count = 0);

	//Сетер кількості іграшок
	void setCount(const int count);

	//Група "гетерів"
	int getCount() const;
	int getFullPrice();
};