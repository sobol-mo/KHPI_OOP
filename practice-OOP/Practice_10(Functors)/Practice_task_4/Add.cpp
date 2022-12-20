#include "Add.h"

//Реалізація перевантаження 
//оператора круглих дужок
double Add::operator()(const double fNumber, 
	const double sNumber) const
{

	//Повертаємо суму першого та другого чисел
	return fNumber + sNumber;
}
