#include "Apple.h"

//����������� � �����������
Apple::Apple(const string& variety, const int price):
	Fruit(variety, price)
{
}

//�������������� ��������� ������� ����� ����������
void Apple::printInfo() const
{
	cout << "������ �����: " << variety << endl;
	cout << "ֳ��: " << price << endl;
}