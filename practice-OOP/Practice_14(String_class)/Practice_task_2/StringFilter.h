#pragma once

#include <iostream>
#include <fstream>
using namespace std;

//Клас-функтор
class StringFilter
{
public:

	//Перевантаження оператора круглих дужок 
	void operator()(const string& path, const string& text) const;
};