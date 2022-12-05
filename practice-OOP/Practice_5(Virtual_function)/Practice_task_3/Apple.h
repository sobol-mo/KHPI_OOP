#pragma once

#include "Fruit.h"

class Apple : public Fruit
{
public:

	//����������� � �����������
	Apple(const string& variety, const int price);

	//�������������� ��������� ������� ����� ����������
	virtual void printInfo() const override;
};