#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;

class BankAccount
{
private:
	int balance;
	int depositInterest;

public:
	//����������� � �����������
	BankAccount(int balance = 0,
		int depositInterest = 0);

	//����������� ���������
	BankAccount(const BankAccount& bankAcc);

	//����� "������"
    int getBalance() const;
	int getDepositInterest() const;

	//����� "������"
	void setBalance(const int balance);
	void setDepositInterest(const int deposInterest);

	//������� ���������� ������ �� ������
	int annualIncome() const;

	//�������������� ���������
	BankAccount* operator=(const BankAccount& bankAcc);
	BankAccount operator+(const BankAccount& bankAcc);
	void operator()(const int balance,
				const int depositInterest);
};