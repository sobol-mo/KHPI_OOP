#include "Product.h"

//Оголошення змінної націнки
int Product::m_markup = 10;

//Конструктор за замовчуванням
Product::Product() :
	m_name(""), m_wholesalePrice(0), m_retailPrice(0)
{
}

//Група "сетерів"
void Product::setName(const string& name)
{
	m_name = name;
}

void Product::setWholesalePrice(const float wholesalePrice)
{
	m_wholesalePrice = wholesalePrice;
}

void Product::setRetailPrice(const float retailPrice)
{
	m_retailPrice = retailPrice;
}

//Група "гетерів"
string Product::getName() const
{
	return m_name;
}

float Product::getWholesalePrice() const
{
	return m_wholesalePrice;
}

float Product::getRetailPrice() const
{
	return m_retailPrice;
}

//Метод підрахунку роздрібної ціни
float Product::calcRetailPrice()
{
	m_retailPrice = m_wholesalePrice + m_wholesalePrice *
		m_markup / 100;
	return m_retailPrice;
}

//Метод зміни націнки
void Product::markupChange()
{
	m_markup = 25;
}