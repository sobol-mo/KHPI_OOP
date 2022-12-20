#include "MyString.h"


//Метод копіювання рядка
void MyString::copy(const char* str)
{
	if(length != 0)
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

//Конструктор за замовчуванням
MyString::MyString()
{
	this->copy("Рядок");
}

//Конструктор з параметрами
MyString::MyString(const char* initString)
{
	copy(initString);
}

//Конструктор копіювання
MyString::MyString(const MyString& myStr)
{
	copy(myStr.string);
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

//Перевантаження оператора(=)
MyString& MyString::operator=(const MyString& myStr)
{
	this->copy(myStr.string);

	return *this;
}

//Перевантаження оператора(>>)
istream& operator>>(istream& in, MyString& myStr)
{
	char buffer[1001]{};
	in.getline(buffer, 1000);
	myStr.copy(buffer);

	return in;
}

//Перевантаження оператора(<<)
ostream& operator<<(ostream& out, const MyString& myStr)
{
	cout << myStr.string;

	return out;
}

//Перевантаження оператора(+)
//Конкатенація рядків
MyString operator+(const MyString& myStrFirst, const MyString& myStrSecond)
{
	char buffer[1001]{};

	char* strTempFirst = myStrFirst.getString();
	char* strTempSecond = myStrSecond.getString();

	int index = 0;
	while (*strTempFirst != '\0')
	{
		*(buffer + index) = *strTempFirst;
		strTempFirst++;
		index++;
	}

	while (*strTempSecond != '\0')
	{
		*(buffer + index) = *strTempSecond;
		strTempSecond++;
		index++;
	}

	buffer[index] = '\0';

	return MyString(buffer);
}