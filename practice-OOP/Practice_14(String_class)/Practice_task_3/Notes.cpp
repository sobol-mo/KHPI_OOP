#include "Notes.h"

//Конструктор з параметрами
Notes::Notes(const string& password)
{
	this->password = password;
	this->enterFlag = 0;
}

//Функція входу  до облікового запису
void Notes::login(const string& password)
{
	//Якщо паролі збігаються, змінюємо прапор
	if (this->password == password) 
		this->enterFlag = 1;
	else 
		throw exception("Невірний пароль");
}

//Функція виходу з облікового запису
void Notes::exit() 
{
	this->enterFlag = 0;
}

//Функція зміни паролю
void Notes::setPassword(const string& newPassword)
{
	if (!enterFlag)
		throw exception("Ви не увійшли до системи");

	if (newPassword.size() < 8) {
		throw exception("Пароль повинен містити більше 7 символів!");
	}
	else {
		this->password = newPassword;
	}
}

//Функція додавання нотатки
void Notes::addNote(const string& note)
{
	if (!enterFlag)
		throw exception("Ви не увійшли до системи");

	notes.insert({ notes.size() + 1, note });
}

//Функція зміни нотатки
void Notes::changeNote(const int pos, const string& text,
	const int deletePos, const int count)
{
	if (!enterFlag)
		throw exception("Ви не увійшли до системи");

	if (pos < 1 && pos > notes.size())
		throw exception("Некоректний індекс");

	// Видаляємо потрібну кількість символів, на
	// їх місце вставляємо текст
	notes.find(pos)->second.replace(deletePos, count, text, 0, text.size());
}

//Друк нотаток
void Notes::printNotes() const
{
	if (!enterFlag)
		throw exception("Ви не увійшли до системи");

	cout << " --- Мої нотатки ---\n";
	for (auto iter = notes.begin(); iter != notes.end(); iter++)
	{
		cout << iter->first << ". " << iter->second << endl;
	}
}