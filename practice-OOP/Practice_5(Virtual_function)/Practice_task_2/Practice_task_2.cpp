/*

    Створити клас Employee від якого успадковується
    клас Manager. Поля класу Employee:
    - ім'я працівника;
    - посада.
    Методи класу Employee:
    - конструктор з параметром;
    - гетер для поля класу;
    - гетер для поля посади
    - віртуальна функція розрахунку заробітної
    плати.
    В класі Manager перевизначити віртуальні функції.
    Для розрахунку заробітної плати треба розділити 
    прибуток на кількість працівників. Звичайний працівник
    заробляє на 30% менше. 

    Створити клас Company. Полями класу є:
    - прибуток компанії;
    - масив робітників(з типом Emloyee*); 
    - розмір команди.
    Методами класу Company є:
    - конструктор з параметрами;
    - функція друку інформації про команду.

*/

#include <Windows.h>
#include "Company.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int income = 100000;
    const int teamSize = 5;
    Employee* team[teamSize] = { new Manager("Софія", "Менеджер"),
                                 new Employee("Олександр", "Консультант"),
                                 new Employee("Денис", "Бухгалтер"),
                                 new Employee("Андрій", "Консультант"),
                                 new Employee("Ліза", "Креатор")};
  
    Company company(team, teamSize, income);

    cout << " --- Команда працівників --- " << endl;
    company.printInfo();

    for (int i = 0; i < teamSize; i++)
    {
        delete *(team + i);
    }
}