#include "Cents.h"
#include "Dollars.h"

//����������� � �����������
Cents::Cents(const int cents)
{
	this->numberOfCents = cents;
}

//����������� ���������
Cents::Cents(const Cents& cents)
{
	this->numberOfCents =
		cents.numberOfCents;
}

//�����
int Cents::getCents() const
{
	return this->numberOfCents;
}

//�����
void Cents::setCents(const int cents)
{
	this->numberOfCents = cents;
}

//�������������� ���������(+)
Cents Cents::operator+(const Cents& cents)
{
	return Cents(this->numberOfCents 
		+ cents.numberOfCents);
}

//�������������� ���������(+)
Cents Cents::operator+(const Dollars& dollars)
{
	return Cents(this->numberOfCents 
		+ dollars.getDollars() * 100);
}

//�������������� ���������("()")
void Cents::operator()(const bool flag)
{
	if (flag == 1) {
		
		while (1)
		{	
			//���� ������� ������ �������
			//�� 100 -> �������� � �����
			if (numberOfCents % 100 == 0) {
				break;
			}
			numberOfCents++;
		}
	}
	else {

		while (1)
		{
			if (numberOfCents % 100 == 0) {
				break;
			}
			numberOfCents--;
		}
	}
}