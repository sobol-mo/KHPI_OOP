#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;

class Square
{
private:
	int side;

public:
	//����������� �� �������������
	Square();

	//����������� � �����������
	Square(const int side);

	//����������� ���������
	Square(const Square& sqre);

	//����� ������
	int getSide() const;
	void setSide(const int side);

	//�������������� ����� ����� �����
	Square operator+(const Square& sqre);
	Square operator-(const Square& sqre);
	Square operator*(const Square& sqre);
	Square operator=(const Square& sqre);
};