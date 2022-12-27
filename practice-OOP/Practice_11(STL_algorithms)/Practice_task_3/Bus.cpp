#include "Bus.h"

//Конструктор з параметрами за замовчуванням
Bus::Bus(const int busNumber, const bool locationFlag)
{
	this->busNumber = busNumber;
	this->locationFlag = locationFlag;
}

//Конструктор копіювання
Bus::Bus(const Bus& bus)
{
	this->busNumber = bus.busNumber;
	this->locationFlag = bus.locationFlag;
}

//Група "гетерів" класу
int Bus::getBusNumber() const
{
	return this->busNumber;
}

bool Bus::getLocationFlag() const
{
	return this->locationFlag;
}

//Перевантаження оператора(=)
Bus& Bus::operator=(const Bus& bus)
{
	this->busNumber = bus.busNumber;
	this->locationFlag = bus.locationFlag;

	return *this;
}

//Перевантаження оператора(<), для порівняння номерів
bool Bus::operator<(const Bus& bus) const
{
	return busNumber < bus.busNumber;
}

//Перевантаження оператора(==), для порівняння номерів
bool Bus::operator==(const Bus& bus) const
{
	return busNumber == bus.busNumber;
}
