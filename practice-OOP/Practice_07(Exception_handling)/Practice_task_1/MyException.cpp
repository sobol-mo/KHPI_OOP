#include "MyException.h"

//Конструктор з параметрами
MyException::MyException(const string& errorMessage)
{
    this->errorMessage = errorMessage;
}

//Функція, яка повертає повідомлення
string MyException::what() const
{
    return this->errorMessage;
}
