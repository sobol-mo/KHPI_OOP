﻿/*

    Створити клас Human. Поля класу:
    - прізвище;
    - вік.
    В класі наявний віртуальний метод друку
    інформації.

    Створити клас Employee, успадкований від Human.
    Полем класу є заробітна плата.
    Методи класу Emploee:
    - сетер для поля класу;
    - перевизначення віртуальної функції.

    Створити клас Teacher, успадкований від Employee.
    Полями класу є:
    - номер школи;
    - предмет.
    У класі наявне перевизначення віртуальної функції.

    Створити шаблоний клас Container. Клас реалізовує
    зручний інтерфейс для роботи з колекцією динамічно
    створених екземплярів класу. 
    Поля класу Container:
    - масив покажчиків(тип шаблону);
    - кількість елементів в масиві.
    Методи класу:
    - конструктор за замовчуванням;
    - деструктор;
    - перевантаження оператора(+=), для додавання нового
    об'єкту;
    - перевантаження оператора квадратних дужок;
    - функція вилучення покажчика з масиву;
    - гетер для розміру масиву. 

    Реалізувати шаблонний клас у двох файлах:
    - заголовний файл;
    - файл реалізації.
    При додаванні і вилученні елементу із масиву перестворювати
    його з новим розміром. Передбачити виняткові випадки.
    Явно оголосити три шаблони з типами даних:
    - human;
    - employee;
    - teacher.

*/

#include <Windows.h>
#include "Container.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Container<Human> container;

    container += new Human("Мельников", 23);
    container += new Employee("Паржницький", 19, 1000);
    container += new Teacher("Пишкін", 30, 12000, 15, "Математика");

    try
    {
        cout << " --- Друк контейнера ---\n";
        for (int i = 0; i < container.getSize(); i++)
        {
            cout << " - Інформація про " << i + 1
                << " людину - " << endl;
            container[i].printInfo();
            cout << endl;
        }

        //Передача управління пам'яттю покажчику
        Human* pointer = container.getElement(1);

        cout << " --- Оновлений контейнер ---" << endl;
        for (int i = 0; i < container.getSize(); i++)
        {
            cout << " - Інформація про " << i + 1
                << " людину - " << endl;
            container[i].printInfo();
            cout << endl;
        }

        cout << " --- Друк інформації за допомогою покажчика ---\n";
        pointer->printInfo();

        //Звільняємо пам'ять 
        delete pointer;
    }
    catch (const exception& exception)
    {
        cout << exception.what() << endl;
    }
}