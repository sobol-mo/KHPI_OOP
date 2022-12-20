#include "ProductInfo.h"

//Конструктор з параметрами за замовчуванням
ProductInfo::ProductInfo(const string& name, const int amount)
{
	this->name = name;
	this->amount = amount;
}

//Конструктор копіювання
ProductInfo::ProductInfo(const ProductInfo& product)
{
	this->name = product.name;
	this->amount = product.amount;
}

//Функція для покупки товару
string ProductInfo::buyProduct()
{
	if (amount == 0)
		throw exception("Товар відсутній!");

	this->amount--;
	return this->name;
}

//Гетер для поля кількості товару
int ProductInfo::getAmount() const
{
	return this->amount;
}

//Перевантаження оператора(=)
ProductInfo& ProductInfo::operator=(const ProductInfo& product)
{

	this->name = product.name;
	this->amount = product.amount;
	
	return *this;
}

//Перевантаження оператора(<<)
ostream& operator<<(ostream& out, const ProductInfo& product)
{
	return out << "Назва: " << product.name
		<< " | Кількість: " << product.amount;
}