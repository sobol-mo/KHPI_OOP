﻿/*

	Створити клас TypeException, який обробляє
	винятки для трьох типів даних.
	Винятки для типу даних int:
	- якщо квадрат числа більший за 100,
	повідомлення "Число завелике";
	- якщо квадрат число менший за 100,
	надрукувати квадрат числа;
	- якщо квадрат числа дорівнює 100,
	надрукувати на екрані результат виразу 100/3.

	Винятки для типу даних double:
	- якщо дрібна частина менша за 0.5, повідомлення 
	"Округлити у більший бік";
	- якщо дрібна частина дорювнює або більше за 0.5,
	повідомлення "Округлити у більший бік";
	- якщо дрябна частина дорівнює 0, генерація 
	помилки(int).

	Винятки для типу даних string:
	- довжина рядка менша за 1, згенерувати 
	помилку типу(int);
	- довжина рядка більша за 1, менша за 10, 
	повідомлення "Відповідна довжина";
	- довжина рядка більша за 10, 
	згенерувати помилку типу(double);

	Використовувати try-catch блок у методах класу. 
	У методі обробки типу даних string один з 
	блоків catch має невизначений тип(...).

*/


#include <Windows.h>
#include "TypeException.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	TypeException exception;

	cout << " -- Обробка винятків типу даних int --\n";
	exception.intException(3);
	exception.intException(10);
	exception.intException(15);
	cout << endl;

	cout << " -- Обробка винятків типу даних double --\n";
	exception.doubleException(31);
	exception.doubleException(10.45);
	exception.doubleException(1.99);
	cout << endl;

	cout << " -- Обробка винятків типу даних string --\n";
	exception.stringException("А");
	exception.stringException("Привіт");
	exception.stringException("Цікаве місто, Харків!");
}