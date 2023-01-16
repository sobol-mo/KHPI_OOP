#include "Company.h"

//Конструктор з параметрами
Company::Company(Employee** team, const int teamSize, const int income)
{
	this->team = team;
	this->teamSize = teamSize;
	this->income = income;
}

//Функція друку інформації про команду
void Company::printInfo() const
{
	for (int i = 0; i < teamSize; i++)
	{
		cout << team[i]->getPosition() <<
			": " << team[i]->getName() <<
			", заробітна плата: " << 
			team[i]->getSalary(this->income, this->teamSize) 
			<< endl;
	}
}