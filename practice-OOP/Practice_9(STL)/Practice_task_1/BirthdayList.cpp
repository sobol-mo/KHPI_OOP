#include "BirthdayList.h"

//Функція додавання людини до списку
void BirthdayList::addPerson(const Person& newPerson)
{
	birthdayList.insert(newPerson);
}

//Функція видалення людини зі списку
bool BirthdayList::deleteByBirthday(const Date& birthday)
{
	bool flag = 0;

	//Ставимо покажчик на початок multiset, ітеруємо до кінця
	//Можна використовувати створений псевдномін або auto
	for (auto pMultiset = birthdayList.begin(); pMultiset != birthdayList.end(); pMultiset++)
	{

		//Якщо дати збіглися, видаляємо
		if (pMultiset->getBirthday() == birthday) {
			birthdayList.erase(pMultiset);
			flag = 1;
			break;
		}
	}

	//Флаг видалення елементу
	return flag;
}

//Друк списку
void BirthdayList::printList() const
{

	if (birthdayList.empty())
		throw exception("Список порожній!");

	//Ставимо покажчик на початок multiset, ітеруємо до кінця
	for (auto pMultiset = birthdayList.begin(); pMultiset != birthdayList.end(); pMultiset++)
	{

		//Розіменовуємо покажчик, друкуємо інформацію
		cout << *pMultiset << endl;
	}
}

//Функція пошуку людини у списку
multiset_iterator BirthdayList::searchPerson(const string& secondName)
{

	for (auto pMultiset = birthdayList.begin();; pMultiset++)
	{

		//Вихід, якщо кінец
		if (pMultiset == birthdayList.end()) {
			throw exception("Елемент не знайден!");
		}

		//Якщо знайшли, повертаємо покажчик на елемент
		if(pMultiset->getSecondName() == secondName){
			return pMultiset;
		}
	}
}