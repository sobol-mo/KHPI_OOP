#pragma once

#include "Add.h"
#include "Multiply.h"
#include <iostream>
#include <vector>

using namespace std;

class VectorsCalculator
{
private:

	//Результуючий вектор
	vector<double> resultVector;

public:

	//Функтор для розрахунків двох векторів
	void operator()(const vector<double>& firstVect,
	                const vector<double>& secondVect, 
	                const IBinaryFunction* functor);

	//Функція друку результату
	void printResult() const;
};

