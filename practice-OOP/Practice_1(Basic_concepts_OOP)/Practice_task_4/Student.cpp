#include "Student.h"

//Створення статичної змінної
int Student::m_countStudent = 0;

//Конструктор за започенням
Student::Student() : m_group(125)
{
	m_countStudent++;
	m_name = "Student" + to_string(m_countStudent);
	m_phoneStud[0].setCode(rand() % 100 + 1);
	m_phoneStud[0].setPhoneNumber(rand() % 100000 + 10000);
	m_phoneStud[1].setCode(rand() % 100 + 1);
	m_phoneStud[1].setPhoneNumber(rand() % 100000 + 10000);
}

//Конструктор з параметрами
Student::Student(const string& name, const int group,
	const int numPhoneFirst, const int numPhoneSecond,
	const int codeFirst, const int codeSecond) : m_group(group)
{
	m_countStudent++;
	m_name = name;
	m_phoneStud[0].setCode(codeFirst);
	m_phoneStud[0].setPhoneNumber(numPhoneFirst);
	m_phoneStud[1].setCode(codeSecond);
	m_phoneStud[1].setPhoneNumber(numPhoneSecond);
}

//Функція друку інформації
void Student::printInfo() const
{
	cout << m_countStudent << ". " << m_name << "  Група: "
		<< m_group << endl;
	for (int i = 0; i < 2; i++)
	{
		cout << "Код: " << m_phoneStud[i].getCode()
			<< "  Номер телефону: " << m_phoneStud[i].getPhoneNumber()
			<< endl;
	}
}