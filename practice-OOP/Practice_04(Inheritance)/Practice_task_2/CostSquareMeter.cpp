#include "CostSquareMeter.h"

//Конструктор з параметром
CostSquareMeter::CostSquareMeter(const int cost)
{
	this->cost = cost;
}

//Гетер поля класу
int CostSquareMeter::getCost() const
{
	return cost;
}

//Сетер поля класу
void CostSquareMeter::setCost(const int cost)
{
	this->cost = cost;
}