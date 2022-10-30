#include "CarPark.h"

//����������� � �����������
CarPark::CarPark(Car* masCars, int size)
{
	this->masCars = new Car[size];
	this->size = size;

	for (int i = 0; i < size; i++)
	{
		this->masCars[i] = masCars[i];
	}
}

//����������� ���������
CarPark::CarPark(const CarPark& carPark)
{
	*this = carPark;
}

//����������
CarPark::~CarPark()
{
	delete[] masCars;
}

//����� ������ ������
int CarPark::getSize() const
{
	return this->size;
}

//������� ����� ������
void CarPark::print() const
{
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". �����: " 
			<< masCars[i].getBrand()
			<< "  ֳ��: " << masCars[i].getPrice() 
			<< endl;
	}
}

//�������������� ���������(=)
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

//�������������� ���������(+)
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

//�������������� ���������("[]")
Car& CarPark::operator[](const int index)
{
	if (index < 0 || index > size - 1) {
		return this->masCars[size - 1];
	}

	return this->masCars[index];
}