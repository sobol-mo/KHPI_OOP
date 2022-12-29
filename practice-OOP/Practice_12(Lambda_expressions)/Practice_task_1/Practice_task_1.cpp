/*

    Створити клас Number, полем класу є
    число з типом int. Методами класу є 
    функції доступу до поля класу.

    Створити vector з типом Number на 10
    елементів. За допомогою функції generate заповнити
    вектор. Відсортувати вектор щоб зліва були парні 
    числа, праворуч непарні. Відсортований вектор 
    надрукувати за допомогою for_each. Підрахувати 
    кількість непарних чисел. У функціях використовувати
    лямбда-вирази.

*/

#include <Windows.h>
#include <vector>
#include <algorithm>
#include "Number.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    vector<Number> numbers(10);
    int min = 0;
    int max = 0;

    cout << "Введіть (min, max): ";
    cin >> min >> max;

    //Генерація масиву об'єктів
    generate(numbers.begin(), numbers.end(), 

        //Захоплюємо min, max за значенням.
        //Тип значення, що повертається Number
        [min,max]() -> Number{
         
            return Number(min + (rand() % (max - min)));
        });

    //Сортування вектор, зліва парні числа, праворуч непарні числа
    sort(numbers.begin(), numbers.end(), 
        [](const Number& fNumber, const Number& sNumber) -> bool{
          
            if (sNumber.getNumber() % 2 == 1 &&
                fNumber.getNumber() % 2 == 0) {
                return true;
            }
            else {
                return false;
            }
        });


    cout << "Відсортований вектор: ";
    for_each(numbers.begin(), numbers.end(),
        [](const Number& number) {

            cout << number.getNumber() << " ";
        });

    cout << "\nКількість непарних елементів: " <<
        count_if(numbers.begin(), numbers.end(),
            [](const Number& number) -> bool {
                return number.getNumber() % 2 != 0;
            });

    return 0;
}