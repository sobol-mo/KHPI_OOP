#include "MyString.h"


//Метод копіювання рядка
void MyString::copy(const char* str)
{
	delete[] string;

	length = strlen(str);
	string = new char[length + 1];

	int i = 0;
	while (*(str + i) != '\0')
	{
		*(string + i) = *(str + i);
		i++;
	}
	*(string + length) = '\0';
}

//Конструктор з параметрами
MyString::MyString(const char* initString):
	length(strlen(initString))
{
	copy(initString);
}

//Деструктор
MyString::~MyString()
{
	delete[] string;
}

//Група "гетерів"
char* MyString::getString() const
{
	return string;
}

int MyString::getLength() const
{
	return length;
}