#include "GemstoneInfo.h"

//Конструктор з параметрами за замовчуванням
GemstoneInfo::GemstoneInfo(const string& nameOfGem, 
	const string& location)
{
	this->nameOfGem = nameOfGem;
	this->location = location;
}

//Конструктор копіювання
GemstoneInfo::GemstoneInfo(const GemstoneInfo& gemstone)
{
	this->nameOfGem = gemstone.nameOfGem;
	this->location = gemstone.location;
}

//Перевантаження оператора(=)
GemstoneInfo& GemstoneInfo::operator=(const GemstoneInfo& gemstone)
{
	this->nameOfGem = gemstone.nameOfGem;
	this->location = gemstone.location;

	return *this;
}

//Перевантаження оператора(<<)
ostream& operator<<(ostream& out, const GemstoneInfo& gemstone)
{
	
	out << "Назва: " << setw(10) << gemstone.nameOfGem
		<< " | Знаходження: " << setw(14) << gemstone.location;

	return out;
}
