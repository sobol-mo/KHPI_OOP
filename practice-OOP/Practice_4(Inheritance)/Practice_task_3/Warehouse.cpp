#include "Warehouse.h"

//Конструктор з параметром
Warehouse::Warehouse(const int count)
{
	this->count = (count >= 0 ? count : 1);
	this->fullPrice = count * getPrice();
}

//Сетер кількості іграшок
void Warehouse::setCount(const int count)
{
	this->count = (count >= 0 ? count : 1);
}

//Група "гетерів"
int Warehouse::getCount() const
{
	return count;
}

int Warehouse::getFullPrice()
{
	this->fullPrice = count * getPrice();
	return fullPrice;
}
