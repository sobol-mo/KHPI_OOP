#pragma once

#include <iostream>
#include <string>

using namespace std;

class Exception
{
protected:

	//Повідомлення
	string message;

public:

	//Конструктор з параметром
	Exception(const string& message = "error");

	//Функція, яка повертає повідомлення
	string what() const;
};