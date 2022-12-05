#pragma once

#include "Employee.h"

class Manager : public Employee
{
public:

	//����������� � �����������
	Manager(const string& name, const string& position);

	//�������������� ������� ���������� �������� �����
	virtual int getSalary(const int income, const int numberOfEmployee) const override;
};