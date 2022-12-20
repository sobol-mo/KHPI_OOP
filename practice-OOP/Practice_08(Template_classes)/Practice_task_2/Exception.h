#pragma once

#include <iostream>
using namespace std;

class Exception
{
private:

	//Повідомлення
	string message;

public:

	//Конструктор з параметром
	Exception(const string& message);

	//Функція, що повертає повідомлення
	string what() const;
};

