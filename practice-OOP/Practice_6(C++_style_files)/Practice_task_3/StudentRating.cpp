#include "StudentRating.h"

//Конструктор з параметром
StudentRating::StudentRating(const string& path)
{
	this->numbeOfStudents = 0;
	this->path = path;
}

//Функція додавання студента до рейтингу
void StudentRating::addStudent(const Student& student)
{
	if (SIZE == numbeOfStudents)
		return;

	//Додаємо студента до рейтингу
	this->studentRating[numbeOfStudents] = student;

	//Оновлюємо файл
	this->fileUpdate(1);
	numbeOfStudents++;
}

//Функція сортування рейтингу
void StudentRating::sortRating()
{
	Student tempStudent;

	//Сортування списку
	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = i; j < SIZE; j++)
		{
			if (studentRating[i].getGradeOOP() < studentRating[j].getGradeOOP()) {

				tempStudent = studentRating[i];
				studentRating[i] = studentRating[j];
				studentRating[j] = tempStudent;
			}
		}
	}

	//Оновлюємо файл
	this->fileUpdate(0);
}

//Функція видалення студента з рейтингу
bool StudentRating::deleteStudent(const string& secondName)
{
	//Флаг видалення студента
	bool deleteFlag = 0;
	Student tempStudent;

	for (int i = 0; i < numbeOfStudents; i++)
	{
		if (studentRating[i].getSecondName() == secondName) {

			//Занулюємо інформацію про студента
			studentRating[i] = tempStudent;
			numbeOfStudents--;

			//Сортуємо список та оновлюємо файл
			this->sortRating();
			deleteFlag = 1;
			break;
		}
		else {
			deleteFlag = 0;
		}
	}

	return deleteFlag;
}

//Функція друку рейтингу
void StudentRating::printRating() const
{
	for (int i = 0; i < numbeOfStudents; i++)
	{
		cout << studentRating[i] << endl;
	}
}

//Функція зчитування інформації з файлу
void StudentRating::readFile(const string& path)
{
	this->numbeOfStudents = 0;
	ifstream fin(path);

	if (!fin.is_open())
		return;

	//Зчитуємо інформацію про студентів 
	while (!(numbeOfStudents == SIZE))
	{
		fin >> studentRating[numbeOfStudents++];

		//Якщо кінцець файлу вихід із циклу
		if (fin.eof()) {
			numbeOfStudents--;
			break;
		}
	}

	fin.close();
}

//Функція оновлення файлу з рейтингом
void StudentRating::fileUpdate(const bool typeUpdate)
{
	//Якщо тип оновлення 0, оновлюється весь файл
	if (!typeUpdate) {
		ofstream fout(path);

		if (!fout.is_open())
			return;

		for (int i = 0; i < numbeOfStudents; i++)
		{
			fout << studentRating[i].getSecondName()
				<< " " << studentRating[i].getGradeOOP()
				<< " " << studentRating[i].getGradeMath()
				<< " " << studentRating[i].getGradePhilosophy()
				<< endl;
		}

		fout.close();
	}
	//В іншому випадку додаємо до кінця файлу нового студента
	else {
		ofstream fout(path, ios::app);

		if (!fout.is_open())
			return;

		fout << studentRating[numbeOfStudents].getSecondName()
			<< " " << studentRating[numbeOfStudents].getGradeOOP()
			<< " " << studentRating[numbeOfStudents].getGradeMath()
			<< " " << studentRating[numbeOfStudents].getGradePhilosophy()
			<< endl;

		fout.close();
	}
}