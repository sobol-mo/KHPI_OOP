#include "Product.h"

//Оголошення змінної націнки
int Product::markup = 10;

//Конструктор за замовчуванням
Product::Product() :
	name(""), wholesalePrice(0), retailPrice(0)
{
}

//Група "сетерів"
void Product::setName(const string& name)
{
	this->name = name;
}

void Product::setWholesalePrice(const float wholesalePrice)
{
	this->wholesalePrice = wholesalePrice;
}

void Product::setRetailPrice(const float retailPrice)
{
	this->retailPrice = retailPrice;
}

//Група "гетерів"
string Product::getName() const
{
	return name;
}

float Product::getWholesalePrice() const
{
	return wholesalePrice;
}

float Product::getRetailPrice() const
{
	return retailPrice;
}

//Метод підрахунку роздрібної ціни
float Product::calcRetailPrice()
{
	retailPrice = wholesalePrice + wholesalePrice *
		markup / 100;
	return retailPrice;
}

//Метод зміни націнки
void Product::markupChange()
{
	this->markup = 25;
}