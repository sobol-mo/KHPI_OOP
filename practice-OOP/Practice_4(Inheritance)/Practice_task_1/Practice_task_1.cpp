/*

	Створити клас Number, від якого успадковуються клас Square.
	Клас Number містить поле number. 
	Методи класу Number:
	- гетер для поля класу;
	- сетер для поля класу.
	Методом класу Square є функція підрахунку квадрату числа.
	Від класу Square успадковується клас Cube, методом якого
	є підрахунок куба числа.

*/

#include "Cube.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Number firstNumber(1);
	cout << "--- Class Number ---";
	cout << "\nNumber = " << firstNumber.getNumber();

	Square secondNumber(2);
	cout << "\n\n--- Class Square ---";
	cout << "\nNumber = " << secondNumber.getNumber();
	cout << "\nSquare = " << secondNumber.getSquare();

	Cube thirdNumber(3);
	cout << "\n\n--- Class Cube ---";
	cout << "\nNumber = " << thirdNumber.getNumber();
	cout << "\nSquare = " << thirdNumber.getSquare();
	cout << "\nCube = " << thirdNumber.getCube();
}