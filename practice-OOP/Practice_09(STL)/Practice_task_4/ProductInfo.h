#pragma once

#include <iostream>
using namespace std;

class ProductInfo
{
private:

	//Назва товару
	string name;

	//Кількість
	int amount;

public:

	//Конструктор з параметрами за замовчуванням
	ProductInfo(const string& name = "",
	            const int amount = 0);

	//Конструктор копіювання
	ProductInfo(const ProductInfo& product);

	//Функція для покупки товару
	string buyProduct();
	 
	//Гетер для поля кількості товару
	int getAmount() const;

	//Перевантаження оператора(<<)
	friend ostream& operator<<(ostream& out, const ProductInfo& product);

	//Перевантаження оператора(=)
	ProductInfo& operator=(const ProductInfo& product);
};