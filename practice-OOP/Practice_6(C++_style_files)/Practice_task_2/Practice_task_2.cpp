/*

    Створити клас ArrayInt. Поля класу:
    - покажчик на масив(int);
    - розмір масиву.
    Методи класу:
    - конструктор за замовчуванням, який
    створює випадковий масив на 10 елементів;
    - конструктор з параметрами, приймає 
    покажчик на масив з його розміром, і копіює його;
    - деструктор;
    - гетер для довжини масиву;
    - функція запису масиву у бінарний файл;
    - функція зчитування масиву з бінарного файлу;
    - функція зміни кожного парного числа масиву на -99;
    - перевантаження оператора квадратних дужок.

    Кожна функція роботи з файлом має параметр шлях до
    файлу. При роботі з бінарними файлами використовувати 
    фунції write/read. Зміну кожного парного числа масиву 
    робити у бінарному файлі за допомогою функцій seekp/seekg, 
    та write/read.

*/

#include <Windows.h>
#include "ArrayInt.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    //Шлях до файлу
    string path = "fileForArray.bin";

    //Допоміжні дані
    const int sizeArray = 10;
    int auxiliaryArray[sizeArray] = { 10, 21, 74, 100, 55, 34, 99, 87, 11, 35 };

    //Створюємо об'єкт класу
    ArrayInt array(auxiliaryArray, sizeArray);

    //Запус масиву у бінарний файл
    array.arrayToBinFile(path);

    //Друк масиву на екран
    cout << "Початковий масив: ";
    for (int i = 0; i < array.getSize(); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    //Зміна масиву згідно завдання
    array.changingArrayInFile(path);

    //Зчитуємо масив з бінарного файлу
    array.readArrayFromBinFile(path);

    //Друк масиву на екран
    cout << "Змінений масив: ";
    for (int i = 0; i < array.getSize(); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}