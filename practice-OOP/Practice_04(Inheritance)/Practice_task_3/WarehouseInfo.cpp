#include "WarehouseInfo.h"

//Конструктор з параметром
WarehouseInfo::WarehouseInfo(const int count)
{
	this->count = (count >= 0 ? count : 1);
	this->fullPrice = count * getPrice();
}

//Сетер кількості іграшок
void WarehouseInfo::setCount(const int count)
{
	this->count = (count >= 0 ? count : 1);
}

//Група "гетерів"
int WarehouseInfo::getCount() const
{
	return count;
}

int WarehouseInfo::getFullPrice()
{
	this->fullPrice = count * getPrice();
	return fullPrice;
}
