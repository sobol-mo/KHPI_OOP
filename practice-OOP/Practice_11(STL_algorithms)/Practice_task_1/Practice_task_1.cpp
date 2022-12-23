/*

    Створити клас Schoolboy з полями:
    - ім'я;
    - оцінки(vector з типом int).
    Методи класу:
    - конструктор з параметром(ім'я);
    - перевантаження конструктора з параметрами(ім'я, оцінки);
    - функція додавання оцінки;
    - функція підрахунку оцінок нижче заданої;
    - функція підрахунку середньо арифметичного;
    - функція заміни всіх шуканих оцінок на задану;
    - функція сортування оцінок;
    - функція друку інформації.

    Для реалізації методів(крім функції друку інформації) 
    не використовувати цикли та умовні оператори.
    Все реалізовувати за допомогою STL.

*/

#include <Windows.h>
#include "Schoolboy.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    vector<int> grades = { 5, 12, 5, 10 };

    Schoolboy schoolboy("Денис", grades);

    cout << " --- Друк інформації ---\n";
    schoolboy.printInformation();
    cout << "Середнє арифметичне: " 
        << schoolboy.averageGrade() << endl;
    cout << "Кількість оцінок нижче 7: " 
        << schoolboy.gradesCountLessGiven(7) << endl;

    //Додавання оцінок
    schoolboy.addGrade(10);
    schoolboy.addGrade(8);
    schoolboy.addGrade(8);

    //Сортування оцінок
    schoolboy.sortGrades();

    //Змінюємо всі оцінки 5 на 8 
    schoolboy.replaceGrades(5, 8);

    cout << "\n--- Друк оновленої інформації ---\n";
    schoolboy.printInformation();
    cout << "Середнє арифметичне: " 
        << schoolboy.averageGrade() << endl;
    cout << "Кількість оцінок нижче 10: " 
        << schoolboy.gradesCountLessGiven(10) << endl;
}