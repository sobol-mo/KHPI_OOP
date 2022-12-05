#pragma once

#include "Manager.h"

class Company
{
private:

	//�������� ������
	int income;

	//����� ������� ��������
	Employee** team;

	//����� �������
	int teamSize;

public:

	//����������� � �����������
	Company(Employee** team, const int teamSize, const int income);

	//������� ����� ���������� ��� �������
	void printInfo() const;
};