#include "NumbersSet.h"

//Функція розрахунку квадрата числа
int square(const int number)
{
	return number * number;
}

//Конструктор з параметром
NumbersSet::NumbersSet(const string& name)
{
	this->name = name;
}

//Функція додавання числа
void NumbersSet::addNumber(const int number)
{
	numbersSet.push_back(number);

	//Після додавання сортуємо list
	numbersSet.sort();
}

//Функція зміни всіх чисел на їх квадрати
void NumbersSet::changeToSquareNumber()
{
	if (numbersSet.empty())
		throw exception("Множина чисел порожня!");

	transform(numbersSet.begin(), numbersSet.end(), 
		numbersSet.begin(), square);
}

//Функція об'єднання множин
void NumbersSet::mergeSet(NumbersSet& set)
{
	numbersSet.merge(set.numbersSet);
}

//Функція видалення повторюваних чисел
void NumbersSet::removeRepetitions()
{
	if (numbersSet.empty())
		throw exception("Множина чисел порожня!");

	//За допомогою функції unique видаляємо всі числа,
	//які повторюються повертаючи ітератор на нову послідовність
	auto it = unique(numbersSet.begin(), numbersSet.end());

	//За допомогою методу resize і функції distance
	//змінюємо фактичний розмір контейнера list
	numbersSet.resize(distance(numbersSet.begin(), it));
}

//Функція знаходження перетину множин
list<int> NumbersSet::getIntersection(const NumbersSet& set) const
{
	if (numbersSet.empty())
		throw exception("Перша множина чисел порожня!");

	if (set.numbersSet.empty())
		throw exception("Друга множина чисел порожня!");

	list<int> intersection;

	//Пошук усіх повторів чисел у двох множинах 
	set_intersection(numbersSet.begin(), numbersSet.end(),
		set.numbersSet.begin(), set.numbersSet.end(),

		//back_inserter потрібен для додавання
		//знайденого числа у кінець intersection
		back_inserter(intersection));

	return intersection;
}

//Функція знаходження першої пари чисел, що розрізняється
mismatch_pair NumbersSet::firstMismatch(const NumbersSet& set) const
{
	if (numbersSet.empty())
		throw exception("Перша множина чисел порожня!");

	if (set.numbersSet.empty())
		throw exception("Друга множина чисел порожня!");

	mismatch_pair pair = mismatch(numbersSet.begin(), numbersSet.end(),
		set.numbersSet.begin(), set.numbersSet.end());

	return pair;
}

//Функція друку множини
void NumbersSet::print() const
{
	if (numbersSet.empty())
		throw exception("Множина чисел порожня!");

	cout << name << " = { ";

	for (const auto& elem : numbersSet)
		cout << elem << " ";
	
	cout << "}" << endl;
}