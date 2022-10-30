#pragma once

#include "Car.h"

class CarPark
{
private:
	Car* masCars;
	int size;

public:
	//����������� � �����������
	CarPark(Car* masCars, int size);

	//����������� ���������
	CarPark(const CarPark& carPark);

	//����������
	~CarPark();

	//�����
	int getSize() const;

	//������� ����� ������ �����
	void print() const;

	//�������������� ���������
	CarPark* operator=(const CarPark& carPark);
	CarPark operator+(const Car& car);
	Car& operator[](const int index);
};