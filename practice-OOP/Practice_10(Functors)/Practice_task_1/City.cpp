#include "City.h"

//Конструктор з параметрами за замовчуванням
City::City(const string& cityName, const int population)
{
	this->cityName = cityName;
	this->population = population;
}

//Конструктор копіювання
City::City(const City& city)
{
	this->cityName = city.cityName;
	this->population = city.population;
}

//Функтор перевантажений для порівняння кількості населення
bool City::operator()(const City& firstCity, const City& secondCity) const
{
	return firstCity.population > secondCity.population;
}

//Перевантаження оператора(<<)
ostream& operator<<(ostream& out, const City& city)
{
	return out << "Назва: " << city.cityName
		<< " | населення: " << city.population;
}

//Перевантаження оператора(<), порівнює назви міст
bool operator<(const City& firstCity, const City& secondCity)
{
	return firstCity.cityName < secondCity.cityName;
}