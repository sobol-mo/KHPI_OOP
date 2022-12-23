#pragma once

class Bus
{
private:

	//Номер автобуса
	int busNumber;

	//Флаг місцезнаходження
	//1 - скоро прибуде на зупинку
	//0 - виїхав із зупинки
	bool locationFlag;

public:
	
	//Конструктор з параметрами за замовчуванням
	Bus(const int busNumber = 0,
		const bool locationFlag = 0);

	//Конструктор копіювання
	Bus(const Bus& bus);

	//Група "гетерів" класу
	int getBusNumber() const;
	bool getLocationFlag() const;

	//Перевантаження оператора=
	Bus& operator=(const Bus& bus);

	//Перевантаження оператора<, для порівняння номерів
	bool operator<(const Bus& bus) const;

	//Перевантаження оператора==, для порівняння номерів
	bool operator==(const Bus& bus) const;
};