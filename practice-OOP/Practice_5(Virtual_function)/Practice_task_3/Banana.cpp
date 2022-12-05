#include "Banana.h"

//����������� � �����������
Banana::Banana(const string& variety, const int price) :
	Fruit(variety, price)
{
}

//�������������� ��������� ������� ����� ����������
void Banana::printInfo() const
{
	cout << "����� �����: " << variety << endl;
	cout << "ֳ��: " << price << endl;
}