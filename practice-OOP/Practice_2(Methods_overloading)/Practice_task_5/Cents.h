#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;
class Dollars;

class Cents
{
private:
	int numberOfCents;

public:
	//����������� � �����������
	Cents(const int cents = 0);

	//����������� ���������
	Cents(const Cents& cents);

	//�����
	int getCents() const;

	//�����
	void setCents(const int cents);

	//�������������� ���������
	Cents operator+(const Cents& cents);
	Cents operator+(const Dollars& dollars);
	void operator()(const bool flag);
};

