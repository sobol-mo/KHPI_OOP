#include "Employee.h"

//����������� � ����������
Employee::Employee(const string& name, const string& position) {

	this->name = name;
	this->position = position;
}

//����� ��� ��'�
string Employee::getName() const
{
	return this->name;
}

//����� ��� ������
string Employee::getPosition() const
{
	return this->position;
}

//������� ���������� �������� �����
int Employee::getSalary(const int income, const int numberOfEmployee) const
{
	return (income / numberOfEmployee - income / numberOfEmployee * 0.3);
}