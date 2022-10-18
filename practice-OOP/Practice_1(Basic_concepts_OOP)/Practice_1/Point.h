#include <iostream>  // std::cout, std::cin
#include <iomanip>   // setw(), setprisition()
#include <Windows.h> // SetConsoleOutputCP

using namespace std;

class Point
{
private:
	// ������� "m_" = "members" ��������������� 
	//��� ������������ ���� �����

	int m_x;
	int m_y;

public:
	Point();
	Point(const int x, const int y = 16);
	Point(const Point& point);

	//����� "������" 
	void setX(const int x);
	void setY(const int y);

	//����� "������"
	int getX() const;
	int getY() const;

	void copy(const Point& point);
	void show() const;
};