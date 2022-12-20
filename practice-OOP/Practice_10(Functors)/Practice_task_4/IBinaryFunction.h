#pragma once

//Клас-функтор інтерфейс
class IBinaryFunction
{
public:

	//Абстрактне перевантаження оператора круглих дужок
	virtual double operator()(const double fNumber,
		const double sNumber) const = 0;
};