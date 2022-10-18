#include "Phone.h"

//Конструктор за замовчуванням
Phone::Phone() :
	m_code(0), m_phoneNumber(0)
{
}

//Конструктор з параметрами
Phone::Phone(const int code, const int phoneNumber) :
	m_code(code), m_phoneNumber(phoneNumber)
{
}

//Група "сетерів"
void Phone::setCode(const int code) {
	m_code = code;
}
void Phone::setPhoneNumber(const int phoneNum) {
	m_phoneNumber = phoneNum;
}

//Група "гетерів"
int Phone::getCode() const { return m_code; }
int Phone::getPhoneNumber() const { return m_phoneNumber; }