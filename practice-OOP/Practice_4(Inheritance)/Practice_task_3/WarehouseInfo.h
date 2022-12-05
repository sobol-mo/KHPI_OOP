#pragma once

#include "Toy.h"

class WarehouseInfo : public Toy
{
private:

	//Кількість іграшок на складі
	int count;

	//Повна ціна
	int fullPrice;

public:

	//Конструктор з параметром
	WarehouseInfo(const int count = 0);

	//Сетер кількості іграшок
	void setCount(const int count);

	//Група "гетерів"
	int getCount() const;
	int getFullPrice();
};