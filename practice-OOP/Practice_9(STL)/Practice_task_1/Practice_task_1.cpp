/*

    Створити клас Date з полями:
    - день;
    - місяць;
    - рік.
    Методами класу Date є:
    - конструктор з параметрами за замовчуванням;
    - конструктор копіювання
    - гетер для поля року;
    - перевантаження оператора(<<);
    - перевантаження оператора(=);
    - перевантаження оператора(==).

    Створити клас Person, полями класу є:
    - ім'я;
    - дата народження(Date);
    Методи класу Person:
    - конструктор з параметрами за замовчуванням;
    - конструктор копіювання;
    - група "гетерів" класу;
    - перевантаження оператора(<<);
    - перевантаження оператора(<), який порівнює
    рік народження;
    - перевантаження оператора(=).

    Створити клас BirthdayList, у якому зберігаються 
    потрібні користувачу дати днів народження.
    Полем класу є контейнер multiset з типом Person.
    Методи класу:
    - функція додавання людини;
    - функція видалення людини за датою народження;
    - функція друку списку;
    - функція пошуку людини у списку(по імені), 
    повертає ітератор.

*/

#include <Windows.h>
#include "BirthdayList.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    BirthdayList birthdayList;
    multiset_iterator msIterator;
    bool deleteFlag = 0;

    try
    {

        cout << " -- Створення та друк списку днів народження --\n";
        birthdayList.addPerson(Person("Паржницький", 6, 11, 2003));
        birthdayList.addPerson(Person("Агоян", 5, 9, 1999));
        birthdayList.addPerson(Person("Михайленко ", 29, 1, 2004));
        birthdayList.addPerson(Person("Пишкін", 22, 5, 1989));
        
        birthdayList.printList();

        //Пошук елемента
        msIterator = birthdayList.searchPerson("Агоян");

        cout << "\n-- Друк інформації через покажчик --\n";
        cout << *msIterator << endl;

        //Видалення елемента
        deleteFlag = birthdayList.deleteByBirthday(Date(6, 11, 2003));

        if (deleteFlag) {
            cout << "\nЕлемент видалено!" << endl;
        }
        else {
            cout << "\nЕлемент не знайдено!" << endl;
        }

        cout << "\n-- Друк оновленого списку --\n";
        birthdayList.printList();

    }
    catch (const exception& exception)
    {
        cout << exception.what() << endl;
    }
}