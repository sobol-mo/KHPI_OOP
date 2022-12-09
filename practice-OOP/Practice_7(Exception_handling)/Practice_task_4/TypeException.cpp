#include "TypeException.h"

//Винятки для типу даних int
void TypeException::intException(const int number)
{
	int squareNumber = pow(number, 2);

	try
	{
		if (squareNumber < 100) throw squareNumber;
		if (squareNumber > 100) throw "Число завелике!";
		if (squareNumber == 100) throw squareNumber / 3.0;
	}
	catch (const int resultNumber)
	{
		cout << "Квадрат числа: " << resultNumber << endl;
	}
	catch (const char* resultStr) {
		cout << resultStr << endl;
	}
	catch (const double resultNumber) {
		cout << "100 / 3 = " << resultNumber << endl;
	}
}

//Винятки для типу даних double
void TypeException::doubleException(const double number)
{
	double fractionalPart = number - static_cast<int>(number);

	try
	{
		if (fractionalPart == 0.0) throw 2201;
		if (fractionalPart < 0.5) throw "Округлювати у менший бік";
		if (fractionalPart >= 0.5) throw "Округлювати у більший бік";
	}
	catch (const char* resultStr)
	{
		cout << resultStr << endl;
	}
	catch (const int error) {
		cout << "Помилка: " << error << endl;
	}
}

//Винятки для типу даних string
void TypeException::stringException(const string& str)
{
	int stringLength = str.length();

	try
	{
		if (stringLength <= 1) throw -202;
		if (stringLength > 1 && stringLength <= 10) throw string("Відповідна довжина!");
		if (stringLength > 10) throw 330.5;
	}
	catch (const string& message)
	{
		cout << message << endl;
	}
	catch (...) {
		cout << "Не підходяща довжина!" << endl;
	}
}