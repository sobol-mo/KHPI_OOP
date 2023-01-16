#include "Apple.h"

//Конструктор з параметрами
Apple::Apple(const string& variety, const int price):
	Fruit(variety, price)
{
}

//Перевизначення віртуальної функції друку інформації
void Apple::printInfo() const
{
	cout << "Яблуко сорту: " << variety << endl;
	cout << "Ціна: " << price << endl;
}