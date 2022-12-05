#pragma once

#include <string>
#include <iostream>

using namespace std;

class Fruit
{
protected:

	//���� ������
	string variety;

	//ֳ��
	int price;

public:

	//����������� � ����������
	Fruit(const string& variery, const int price);

	//������� ������� �� ����
	int getPrice() const;
	void setPrice(const int price);

	//�������������� �������� ���������� ������
	friend ostream& operator<<(ostream& out,const Fruit& fruit);
	
	//����� ��������� ������� ����� ����������
	virtual void printInfo() const = 0;
};