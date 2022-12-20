#include "Multiply.h"

//Реалізація перевантаження 
//оператора круглих дужок
double Multiply::operator()(const double fNumber, 
	const double sNumber) const
{

	//Повертаємо множення першого та другого чисел
	return fNumber * sNumber;
}