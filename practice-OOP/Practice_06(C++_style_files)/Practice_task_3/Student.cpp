#include "Student.h"

//Конструктор з параметром
Student::Student(const string& secondName, const int gradeOOP, 
				 const int gradeMath, const int gradePhilosophy)
{
	this->secondName = secondName;
	this->gradeOOP = gradeOOP;
	this->gradeMath = gradeMath;
	this->gradePhilosophy = gradePhilosophy;
}

//Група "гетерів"
string Student::getSecondName() const
{
	return this->secondName;
}

int Student::getGradeOOP() const
{
	return this->gradeOOP;
}

int Student::getGradeMath() const
{
	return this->gradeMath;
}

int Student::getGradePhilosophy() const
{
	return this->gradePhilosophy;
}

//Перевантаження оператора(=)
Student& Student::operator=(const Student& student)
{
	this->secondName = student.secondName;
	this->gradeOOP = student.gradeOOP;
	this->gradeMath = student.gradeMath;
	this->gradePhilosophy = student.gradePhilosophy;

	return *this;
}

//Перевантаження оператора(<<)
ostream& operator<<(ostream& out, const Student& student)
{
	out << "Фамілія: " << student.secondName << ", оцінка з ООП: " <<
		student.gradeOOP << ", оцінка з математики: " << student.gradeMath
		<< ", оцінка з філософії: " << student.gradePhilosophy;

	return out;
}

//Перевантаження оператора(>>)
istream& operator>>(istream& in, Student& student)
{
	in >> student.secondName >> student.gradeOOP >>
		student.gradeMath >> student.gradePhilosophy;

	return in;
}