#pragma once

#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:

	//��'�
	string name;

	//������
	string position;

public:

	//����������� � ����������
	Employee(const string& name,
		const string& position);

	//����� ��� ��'�
	string getName() const;

	//������� ��� ������
	string getPosition() const;

	//������� ���������� �������� �����
	virtual int getSalary(const int income, const int numberOfEmployee) const;
};