/*
	Лабораторная работа №2
	Перегрузка операторов в языке C++.
	Вариант №30
	Пример выполнения

	После рефакторинга 
	(замена char строк, исправление перегрузки = )
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <iomanip>
#include <ostream>
#include <iostream>

using namespace std;

#define N 3             //количество экземпляров класса

class church {
	string name;
	string school;
	unsigned int count;
	float square;
	friend ostream& operator<<(ostream& stream, church& o1);
	friend istream& operator>>(istream& stream, church& o1);
	friend void shapka(void);
	friend void linebuild(void);
	friend int isvalid(int a, int b);
public:
	church() { square = 0; count = 0; }
	church(string a, string b, unsigned int c, float d);
	void setall(string a, string b, unsigned int, float);
	void getall(string a, string b, unsigned int& c, float& d);
	void showall(void);
	church& operator = (church& o1);
	int    operator == (church& o1);
	church operator + (church& o1);
};

void shapka(void)
{
	cout << "_______________________________________________________________\n";
	cout << "|         Буддистские монастыри Японии периода Нара           |\n";
	cout << "|-------------------------------------------------------------|\n";
	cout << "|  Название  | Школа | Количество монахов | Площадь земли(га) |\n";
	cout << "|-------------------------------------------------------------|\n";
}

void linebuild(void) {
	cout << "\n|-------------------------------------------------------------|\n";
}

ostream& operator<<(ostream& stream, church& o1) {
	shapka();
	stream << "|" << setw(10) << o1.name << "  |  ";
	stream << setw(5) << o1.school << "|";
	stream << setw(18) << o1.count << "  |";
	stream << setw(17) << o1.square << "  |" << endl;
	linebuild();
	return stream;
}

istream& operator>>(istream& stream, church& o1) {
	cout << "Название, Школа, Количество монахов, Площадь земли: \n";
	stream >> o1.name;
	stream >> o1.school;
	stream >> o1.count;
	stream >> o1.square;
	return stream;
}

int isvalid(int a, int b) {
	if (((a > N - 1) || (a < 0)) || ((b > N - 1) || (b < 0)))
	{
		cout << "Ошибка! Экземпляра с таким индексом не существует.\n";
		_getch();
		return -1;
	}
	else if (a == b)
	{
		cout << "Ошибка! Экземпляр не может быть записан сам в себя.\n";
		_getch();
		return -2;
	}
	return 0;
}

church church::operator + (church& o1) {
	church tr;
	//int i, j;
	tr.name = name + o1.name;
	tr.school = school + o1.school;
	tr.count = count + o1.count;
	tr.square = square + o1.square;
	return tr;
}

int church::operator == (church& o1) {
	if (count != o1.count) { cout << "Данные экземпляры класса не равны."; _getch(); }
	else if (ceil(square) != ceil(o1.square)) { cout << "Данные экземпляры класса не равны."; _getch(); }
	else if (name != o1.name) { cout << "Данные экземпляры класса не равны."; _getch(); }
	else if (school != o1.school) { cout << "Данные экземпляры класса не равны."; _getch(); }
	else cout << "Экземпляры класса равны."; _getch();
	return 0;
}

church& church::operator = (church& o1) {
	name =o1.name;
	school = o1.school;
	count = o1.count;
	square = o1.square;
	return *this;
}

church::church(string a, string b, unsigned int c, float d) {
	name = a;
	school = b;
	count = c;
	square = d;
}

void church::setall(string a, string b, unsigned int c, float d) {
	name = a;
	school = b;
	count = c;
	square = d;
}

void church::showall(void) {
	cout << name << " ";
	cout << school << " ";
	cout << count << " ";
	cout << square << " ";
}

void church::getall(string a, string b, unsigned int& c, float& d)
{
	a = name;
	b = school;
	c = count;
	d = square;
	cout << a << " ";
	cout << b << " ";
	cout << c << " ";
	cout << d << " ";
	cout << "\n";
}


int main(void) {
	setlocale(LC_ALL, "Ukrainian");
	
	string n;
	string t;
	unsigned int s;
	float h;
	short i, k;
	unsigned int s1;
	short q, q1;
	
	church obj[N] 
	{
		church("Тодайдзи", "Т", 220, 368.8),
		church("Якусидзи", "С", 50, 54.7),
		church("Дайандзи", "Д", 10, 12.2)
	};
	
	system("cls");
	cout.precision(2);
	cout << "Название, Школа, Количество монахов, Площадь земли: \n";
	for (i = 0; i < N; i++) {
		obj[i].showall();
		cout << "\n";
	}

	cout << "\nПерегрузка оператора присваивания '='.\n";
	cout << "Введите номера экземпляров класса: заменяемый и заменяющий>\n";
	cin >> q;
	cin >> q1;
	if (isvalid(q, q1) != 0) exit(-1);
	obj[q] = obj[q1];

	cout << "Название, Школа, Количество монахов, Площадь земли: \n";
	for (i = 0; i < N; i++) {
		obj[i].showall();
		cout << "\n";
	}

	cout << "\nПерегрузка оператора соответствия '=='.\n";
	cout << "Введите номера экземпляров класса, которые надо сравнить>\n";
	cin >> q;
	cin >> q1;
	if (isvalid(q, q1) != 0) exit(-1);
	obj[q] == obj[q1];

	cout << "\nПерегрузка оператора суммы '+'.\n";
	cout << "Введите номера экземпляров класса, которые надо сложить>\n";
	cin >> q;
	cin >> q1;
	//church temp;
	if (isvalid(q, q1) != 0) exit(-1);
	church temp = obj[q] + obj[q1];
	cout << "Название, Школа, Количество монахов, Площадь земли: ";
	temp.getall(n, t, s, h);

	cout << "\nПерегрузка оператора потокового ввода '>>'.";
	cout << "\nВведите номер экземпляра класса: ";
	cin >> q;
	if ((q > N - 1) || (q < 0)) { cout << "Ошибка! Экземпляра с таким индексом не существует."; _getch(); exit(-1); }
	cin >> obj[q];

	cout << "\nПерегрузка оператора потокового вывода '<<'.";
	cout << "\nВведите номер экземпляра класса: ";
	cin >> q;
	if ((q > N - 1) || (q < 0)) { cout << "Ошибка! Экземпляра с таким индексом не существует."; _getch(); exit(-1); }
	cout << obj[q];

	_getch();
	return 0;
}