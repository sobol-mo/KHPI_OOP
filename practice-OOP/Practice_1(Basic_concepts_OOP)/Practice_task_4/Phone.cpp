#include "Phone.h"

//Конструктор за замовчуванням
Phone::Phone() :
	code(0), phoneNumber(0)
{
}

//Конструктор з параметрами
Phone::Phone(const int code, const int phoneNumber)
{
	this->code = code;
	this->phoneNumber = phoneNumber;
}

//Група "сетерів"
void Phone::setCode(const int code) {
	this->code = code;
}
void Phone::setPhoneNumber(const int phoneNum) {
	this->phoneNumber = phoneNum;
}

//Група "гетерів"
int Phone::getCode() const { return code; }
int Phone::getPhoneNumber() const { return phoneNumber; }