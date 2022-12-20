#pragma once

#include <iostream>
using namespace std;

class City
{
private:

	//Назва міста
	string cityName;

	//Кількість населення
	int population;

public:

	//Конструктор з параметрами за замовчуванням
	City(const string& cityName = "", 
	     const int population = 0);

	//Конструктор копіювання
	City(const City& city);

	//Перевантаження оператора(<<)
	friend ostream& operator<<(ostream& out, const City& city);

	//Перевантаження оператора(<), порівнює назви міст
	friend bool operator<(const City& firstCity, const City& secondCity);

	//Функтор перевантажений для порівняння кількості населення
	bool operator()(const City& firstCity, const City& secondCity) const;
};