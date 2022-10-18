#include "MyString.h"


//Метод копіювання рядка
void MyString::copy(const char* str)
{
	delete[] m_string;

	m_length = strlen(str);
	m_string = new char[m_length + 1];

	int i = 0;
	while (*(str + i) != '\0')
	{
		*(m_string + i) = *(str + i);
		i++;
	}
	*(m_string + m_length) = '\0';
}

//Конструктор з параметрами
MyString::MyString(const char* initString) :
	m_length(strlen(initString))
{
	copy(initString);
}

//Деструктор
MyString::~MyString()
{
	delete[] m_string;
}

//Група "гетерів"
char* MyString::getString() const
{
	return m_string;
}

int MyString::getLength() const
{
	return m_length;
}