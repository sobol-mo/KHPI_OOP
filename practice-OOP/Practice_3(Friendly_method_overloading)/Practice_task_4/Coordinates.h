#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;

class Coordinates
{
private:
	int x;
	int y;
	int z;

public:
	//����������� � �����������
	Coordinates(const int x = 0,const int y = 0,const int z = 0);

	//����������� ���������
	Coordinates(const Coordinates& coord);

	//coord - coordinate
	//�������������� ����� ������
	Coordinates& operator=(const Coordinates& coord);
	Coordinates& operator++(int);
	Coordinates& operator--();

	//�������������� ����� ����� �������
	friend Coordinates operator+(const Coordinates& firstCoord,
		const Coordinates& secondCoord);

	friend Coordinates operator-(const Coordinates& firstCoord,
		const Coordinates& secondCoord);

	friend Coordinates operator*(const Coordinates& coord,
		const int number);

	friend ostream& operator<<(ostream& out, const Coordinates& coord);
	friend istream& operator>>(istream& in, Coordinates& coord);
};