#include "Fruit.h"

//����������� � ����������
Fruit::Fruit(const string& variery, const int price)
{
	this->variety = variery;
	this->price = price;
}

//������� ������� �� ����
int Fruit::getPrice() const
{
	return this->price;
}

void Fruit::setPrice(const int price)
{
	this->price = price;
}

//�������������� �������� ���������� ������
ostream& operator<<(ostream& out,const Fruit& fruit)
{
	fruit.printInfo();
	return out;
}