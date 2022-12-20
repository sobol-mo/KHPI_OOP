#pragma once

#include "IBinaryFunction.h"

class Add : public IBinaryFunction
{
public:

	//Перевизначення перевантаження 
	//оператора круглих дужок
	virtual double operator()(const double fNumber, 
		const double sNumber) const override;
};

