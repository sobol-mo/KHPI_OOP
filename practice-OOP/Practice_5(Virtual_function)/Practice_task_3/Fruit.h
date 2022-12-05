#pragma once

#include <string>
#include <iostream>

using namespace std;

class Fruit
{
protected:

	//Сорт фрукту
	string variety;

	//Ціна
	int price;

public:

	//Конструктор з параметром
	Fruit(const string& variety, const int price);

	//Функції доступу до поля
	int getPrice() const;
	void setPrice(const int price);

	//Перевантаження операції потокового виводу
	friend ostream& operator<<(ostream& out,const Fruit& fruit);
	
	//Чиста віртуальна функція друку інформації
	virtual void printInfo() const = 0;
};