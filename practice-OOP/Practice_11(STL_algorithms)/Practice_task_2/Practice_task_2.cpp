/*

    Створити клас NumbersSet, з полями класу:
    - назва множини;
    - множина чисел, використовувати list(числа можуть повторюватися)
    з типом даних int.
    Методи класу:
    - конструктор з параметром(назва);
    - функція додавання числа(після додававання
    відразу сортувати список);
    - функція зміни всіх чисел на їх квадрати(функція transform);
    - функція об'єднання множин;
    - функція видалення повторюваних чисел(функція unique);
    - функція знаходження перетин множин(функція set_intersection);
    - функція знаходження першої пари чисел,
    що розрізняються;
    - функція друку множини.

    Додатково реалізувати функцію розрахунку квадрату
    числа. Для реалізації методів класу не використовувати
    цикли і умовні оператори(крім функції друку).

*/

#include <Windows.h>
#include "NumbersSet.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    NumbersSet firstSet("A");
    NumbersSet secondSet("B");

    try
    {

        //Заповнення множин
        //з сортуванням
        firstSet.addNumber(7);
        firstSet.addNumber(7);
        firstSet.addNumber(4);
        firstSet.addNumber(9);
        firstSet.addNumber(9);

        secondSet.addNumber(5);
        secondSet.addNumber(6);
        secondSet.addNumber(4);

        cout << " --- Друк множин ---\n";
        firstSet.print();
        secondSet.print();

        //Пошук перетину множин
        list<int> intersection;
        intersection = firstSet.getIntersection(secondSet);

        cout << "\n--- Перетин множин ---\n"
            << "I = { ";
        for (const auto& elem : intersection)
            cout << elem << " ";
        cout << "}" << endl;

        //Пошук перешої пари, що не збігається
        mismatch_pair mismatchPair = firstSet.firstMismatch(secondSet);
        
        cout << "\nПара чисел: " << *mismatchPair.first << ", "
            << *mismatchPair.second << endl;
        
        //Всі числа зводимо у квадрат
        secondSet.changeToSquareNumber();

        //Видаляємо всі повтори чисел
        firstSet.removeRepetitions();

        cout << "\n--- Друк оновлених множин ---\n";
        firstSet.print();
        secondSet.print();

        //Об'єднання множин
        firstSet.mergeSet(secondSet);

        cout << "\n--- Друк множин після об'єднання ---\n";
        firstSet.print();
        secondSet.print();
    }
    catch (const exception& exception)
    {
        cout << exception.what() << endl;
    }
}