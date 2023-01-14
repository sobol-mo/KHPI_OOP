#include "Information.h"

//Друк інформації про іграшку
void Information::printInfoToy() const
{
	cout << "Назва іграшки: " << getName() << endl;
	cout << "Ціна: " << getPrice() << endl;
}

//Друк інформації складу іграшок
void Information::printWarehouseInfo()
{
	cout << "Кількість іграшок: " <<
		getCount() << endl;
	cout << "Ціна всіх іграшок: " <<
		getFullPrice() << endl;
}