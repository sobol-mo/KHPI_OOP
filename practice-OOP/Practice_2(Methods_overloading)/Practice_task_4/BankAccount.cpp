#include "BankAccount.h"

//����������� � �����������
BankAccount::BankAccount(int balance , 
	int depositInterest )
{
	this->balance = balance;
	this->depositInterest = depositInterest;
}

//����������� ���������
BankAccount::BankAccount(const BankAccount& bankAcc)
{
	this->balance = bankAcc.balance;
	this->depositInterest = bankAcc.depositInterest;
}

//����� "������"
int BankAccount::getBalance() const
{
	return this->balance;
}

int BankAccount::getDepositInterest() const
{
	return this->depositInterest;
}

//����� "������"
void BankAccount::setBalance(const int balance)
{
	this->balance = balance;
}

void BankAccount::setDepositInterest(const 
							int deposInterest)
{
	this->depositInterest = deposInterest;
}


//������� ���������� ������ �� ������
int BankAccount::annualIncome() const
{
	return (balance * depositInterest / 100);
}

//�������������� ���������(=)
BankAccount* BankAccount::operator=(const
							BankAccount& bankAcc)
{

	this->balance = bankAcc.balance;
	this->depositInterest = bankAcc.depositInterest;

	return this;
}

//�������������� ���������(+)
BankAccount BankAccount::operator+(const 
							BankAccount& bankAcc)
{
	BankAccount tempAcc;
	tempAcc.balance = this->balance + bankAcc.balance;
	tempAcc.depositInterest = this->depositInterest +
							  bankAcc.depositInterest;

	return tempAcc;
}

//�������������� ���������("()")
void BankAccount::operator()(const int  balance, 
							const int depositInterest)
{
	if (balance * depositInterest / 100 >
		this->balance * this->depositInterest / 100) {

		this->balance = balance;
		this->depositInterest = depositInterest;
		cout << "��� ������!";
	}
	else {
		cout << "��� �� ������!";
	}
}