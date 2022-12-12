#pragma once

#include <iostream>
using namespace std;

class TypeException
{
public:

	//Винятки для типу даних int
	void intException(const int number);

	//Винятки для типу даних double
	void doubleException(const double number);

	//Винятки для типу даних string
	void stringException(const string& string);
};