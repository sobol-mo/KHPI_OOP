#pragma once

#include "ProductInfo.h"
#include <vector>

//Псевдонім для ітератора
typedef vector<ProductInfo>::iterator storage_it;

class Store
{
private:

	//Контейнер vector для зберігання
	//інформації про наявні товари на складі магазину
	vector<ProductInfo> storage;

public:

	//Функція додавання товару
	void add(const string& name, const int amount);

	//Функція друку всіх наявних товарів
	void printInfo() const;

	//Функція видалення всіх товарів, які не наявні
	void removeMissingItems();

	//Функція видалення товарів у проміжку [fIndex ; sIndex)
	void removeItemsInBetween(const int fIndex, const int sIndex);

	//Перевантаження оператора квадратних дужок 
	ProductInfo& operator[](const int index);
};