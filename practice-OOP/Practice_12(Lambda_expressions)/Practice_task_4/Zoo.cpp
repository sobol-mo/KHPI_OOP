#include "Zoo.h"

//Конструктор за замовчуванням
Zoo::Zoo()
{
	this->flag = 0;
}

//Сетер для поля flag
void Zoo::setFlag(const bool flag)
{
	this->flag = flag;
}

//Функція додавання тварини
void Zoo::addAnimal(const Animal& animal)
{
	if (this->flag)
		animals.push_back(animal);
	else
		animals.push_front(animal);
}

//Функція пошуку тварини
bool Zoo::findAnimal(const string& searchedAnimal) const
{

	bool findFlag = 0;

	for_each(animals.begin(), animals.end(), 
		[&](const Animal& animal) {

			//Якщо знайшли тварину, змінюємо findFlag
			if (searchedAnimal == animal.getName()) {
				findFlag = 1;
			}
		});

	return findFlag;
}

//Функція сортування списку
void Zoo::sortList()
{

	animals.sort(

		// Щоб отримати доступ до змінних класу у лямбда-виразі
		// потрібно передати покажчик this
		// в іншому випадку до полів/методів класу неможливо звернутися
		[this](const Animal& fAnimal, const Animal& sAnimal) -> bool {

			if (this->flag) 
				return fAnimal.getName() < sAnimal.getName();
			else 
				return fAnimal.getWeight() > sAnimal.getWeight();
		});
}

//Функція друку інформації
void Zoo::printInfo() const
{
	for (const auto& animal : this->animals)
		cout << animal << endl;
}