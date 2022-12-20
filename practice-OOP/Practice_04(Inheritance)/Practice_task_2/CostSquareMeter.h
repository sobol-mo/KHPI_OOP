#pragma once

class CostSquareMeter
{
private:

	//Ціна за квадратний метр
	int cost;

public:
	
	//Конструктор з параметром
	CostSquareMeter(const int cost = 0);

	//Гетер поля класу
	int getCost() const;

	//Сетер поля класу
	void setCost(const int cost);

};