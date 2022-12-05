#include "Company.h"

//����������� � �����������
Company::Company(Employee** team, const int teamSize, const int income)
{
	this->team = team;
	this->teamSize = teamSize;
	this->income = income;
}

//������� ����� ���������� ��� �������
void Company::printInfo() const
{
	for (int i = 0; i < teamSize; i++)
	{
		cout << team[i]->getPosition() <<
			": " << team[i]->getName() <<
			", �������� �����: " << 
			team[i]->getSalary(this->income, this->teamSize) 
			<< endl;
	}
}