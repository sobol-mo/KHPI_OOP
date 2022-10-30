#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;

public:
	//����������� �� �������������
	Date();

	//����������� � �����������
	Date(const int day, const int month, const int year);
	 
	//����������� ���������
	Date(const Date& date);

	//����� "������"
	void setDay(const int day);
	void setMonth(const int month);
	void setYear(const int year);

	//����� ����� ����
	void printDate() const;

	//�������������� ���������(����� ������)
	Date operator- (const Date& date);
	bool operator== (const Date& date) const;
	bool operator!= (const Date& date) const;
	bool operator> (const Date& date) const;
	bool operator< (const Date& date) const;
	bool operator>= (const Date& date) const;
	bool operator<= (const Date& date) const;
	Date operator= (const Date& date);
	void operator() (const int day, 
		const int month, const int year);
};

