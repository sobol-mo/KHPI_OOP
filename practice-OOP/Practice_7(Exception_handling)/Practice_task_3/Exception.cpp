#include "Exception.h"

//Конструктор з параметром
Exception::Exception(const string& message)
{
	this->message = message;
}

//Функція, яка повертає повідомлення
string Exception::what() const
{
	return this->message;
}