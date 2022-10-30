#pragma once

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Car
{
private:
	string carBrand;
	int price;

public:
	//����������� � �����������
	Car(string carBrand = "brand1", int price = 10);

	//����� "������"
	string getBrand() const;
	int getPrice() const;

	//����� "������"
	void setBrand(const string& carBrand);
	void setPrice(const int price);

	//�������������� ���������(=)
	Car* operator=(const Car& car);
};