#include "Manager.h"

//����������� � �����������
Manager::Manager(const string& name, const string& position):
	Employee(name, position)
{
}

//�������������� ������� ���������� �������� �����
int Manager::getSalary(const int income, const int numberOfEmployee) const
{
	return (income / numberOfEmployee);
}