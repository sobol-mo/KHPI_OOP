#pragma once

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Doctor
{
private:
	//��'� �������� 
	string namePatient;

public:
	//����������� � �����������
	Doctor(const string& namePatient = "");

	//�������� ��������
	bool hasPatient() const;

	//�������������� ���������
	friend ostream& operator<<(ostream& out, const Doctor& doc);
	friend istream& operator>>(istream& in, Doctor& doc);
	void operator--(int);
};