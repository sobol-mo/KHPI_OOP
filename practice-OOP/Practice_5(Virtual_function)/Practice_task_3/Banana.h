#pragma once

#include "Fruit.h"

class Banana : public Fruit
{
public:

	//����������� � �����������
	Banana(const string& variety, const int price);

	//�������������� ��������� ������� ����� ����������
	virtual void printInfo() const override;
};