#include "CarPark.h"

//Конструктор з параметрами
CarPark::CarPark(Car* masCars, int size)
{
	this->masCars = new Car[size];
	this->size = size;

	for (int i = 0; i < size; i++)
	{
		this->masCars[i] = masCars[i];
	}
}

//Конструктор копіювання
CarPark::CarPark(const CarPark& carPark)
{
	*this = carPark;
}

//Деструктор
CarPark::~CarPark()
{
	delete[] masCars;
}

//Гетер розміру масиву
int CarPark::getSize() const
{
	return this->size;
}

//Функція друку масиву
void CarPark::print() const
{
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". Марка: " 
			<< masCars[i].getBrand()
			<< "  Ціна: " << masCars[i].getPrice() 
			<< endl;
	}
}

//Перевантаження оператора(=)
CarPark* CarPark::operator=(const CarPark& carPark)
{
	Car* tempMas = new Car[carPark.getSize()];
	this->size = carPark.getSize();

	for (int i = 0; i < size; i++)
	{
		tempMas[i].setBrand(carPark.masCars[i].getBrand());
		tempMas[i].setPrice(carPark.masCars[i].getPrice());
	}

	delete[] this->masCars;
	masCars = tempMas;

	return this;
}

//Перевантаження оператора(+)
CarPark CarPark::operator+(const Car& car)
{
	Car* tempMas = new Car[this->size + 1];
	
	for (int i = 0; i < size; i++)
	{
		tempMas[i].setBrand(this->masCars[i].getBrand());
		tempMas[i].setPrice(this->masCars[i].getPrice());
	}

	tempMas[size].setBrand(car.getBrand());
	tempMas[size].setPrice(car.getPrice());

	return CarPark(tempMas, this->size + 1);
}

//Перевантаження оператора("[]")
Car& CarPark::operator[](const int index)
{
	if (index < 0 || index > size - 1) {
		return this->masCars[size - 1];
	}

	return this->masCars[index];
}