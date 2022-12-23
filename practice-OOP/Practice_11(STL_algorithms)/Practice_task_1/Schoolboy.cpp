#include "Schoolboy.h"

//Конструктор з параметрами
Schoolboy::Schoolboy(const string& name)
{
	this->name = name;
}

//Перевантаження конструктора з параметрами
Schoolboy::Schoolboy(const string& name, const vector<int>& grades)
{
	this->name = name;

	//Копіюємо вміст вектора
	copy(grades.begin(), grades.end(), back_inserter(this->grades));
}

//Функція підрахунку оцінок нижче заданої
int Schoolboy::gradesCountLessGiven(const int grade) const
{

	int count = count_if(grades.begin(), grades.end(),

		//За допомогою bind2nd зв'язуємо перший 
		//аргумент функтора less<int> з grade
		bind2nd(less<int>(), (grade > 13 || grade < 2) ? 6 : grade));

	return count;
}

//Функція підрахунку середньо арифметичного
double Schoolboy::averageGrade() const
{

	//За допомогою accumulate підраховуємо суму елементів
	return static_cast<double>(accumulate(grades.begin(), grades.end(), 0)) 
		/ grades.size();
}

//Функція заміни всіх шуканих оцінок на задану
void Schoolboy::replaceGrades(const int searchGrade, const int replaceable)
{
	replace(grades.begin(), grades.end(), searchGrade, replaceable);
}

//Функція друку інформації
void Schoolboy::printInformation() const
{
	cout << "Ім'я: " << name <<
		"\nОцінки: ";
	
	for (const auto& element : grades)
		cout << element << " ";

	cout << endl;
}

//Функція сортування оцінок
void Schoolboy::sortGrades()
{
	sort(grades.begin(), grades.end(), less<int>());
}

//Функція додавання оцінки
void Schoolboy::addGrade(const int grade)
{
	grades.push_back((grade > 12 || grade < 1) ? 11 : grade);
}