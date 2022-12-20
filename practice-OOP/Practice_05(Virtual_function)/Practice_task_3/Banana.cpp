#include "Banana.h"

//Конструктор з параметрами
Banana::Banana(const string& variety, const int price) :
	Fruit(variety, price)
{
}

//Перевизначення віртуальної функції друку інформації
void Banana::printInfo() const
{
	cout << "Банан сорту: " << variety << endl;
	cout << "Ціна: " << price << endl;
}