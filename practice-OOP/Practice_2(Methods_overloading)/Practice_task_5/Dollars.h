#pragma once

#include <iostream>
#include <Windows.h>


using namespace std;
class Cents;

class Dollars
{
private:
	int numberOfDollars;

public:
	//����������� � �����������
	Dollars(const int dollars = 0);

	//����������� ���������
	Dollars(const Dollars& dollars);

	//�����
	int getDollars() const;

	//�����
	void setDollars(const int dollars);

	//�������������� ���������
	Dollars operator+(const Dollars& dollars);
	Dollars operator+(const Cents& cents);
	Dollars* operator=(const Dollars& dollars);
	bool operator==(const Dollars& dollars);

};