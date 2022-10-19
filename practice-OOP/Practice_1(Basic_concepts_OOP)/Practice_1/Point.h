#include <iostream>  // std::cout, std::cin
#include <iomanip>   // setw(), setprisition()
#include <Windows.h> // SetConsoleOutputCP

using namespace std;

class Point
{
private:
	int x;
	int y;

public:
	//Конструктор за замовчуванням
	Point();

	//Конструктор з параметрами
	Point(const int x, const int y = 16);

	//Конструктор копіювання
	Point(const Point& point);

	//Група "сетерів" 
	void setX(const int x);
	void setY(const int y);

	//Група "гетерів"
	int getX() const;
	int getY() const;

	//Метод копіювання об'єкту
	void copy(const Point& point);

	//Метод друку об'єкту
	void show() const;
};