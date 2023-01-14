/*

    Створити функтор-інтерфейс IBinaryFunction,
    в якому наявне тільки абстрактне перевантаження 
    оператора круглих дужок.

    Від функтор-інтерфейсу успадковуються два 
    класи-функтори, один перевантажений для 
    розрахунку суми чисел(double), другий для розрахунку
    множення чисел(double).

    Створити клас VectorsCalculator, полем якого є
    вектор з типом double. Методом класу є функція
    друку вектору. У класі перевантажити оператор
    круглих дужок для арифметичних операцій над 
    парами елементів двох векторів. Параметри:
    - перший вектор;
    - другий вектор;
    - функтор(тип IBinaryFunction*).

    Для демонстрації програми створити та заповнити
    два вектори з типом double. Через покажчик 
    на базовий клас динамічно виділяти пам'ять для 
    класів-функторів. За допомогою об'єкту класу
    VectorsCalculator провести розрахунки та
    роздрукувати їх.

*/

#include <Windows.h>
#include "VectorsCalculator.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    try
    {
        //Створення двох векторів 
        vector<double> firstVector = { 12, 33.3, 25, 56,
                                       67, 2, 5.2, 9 };

        vector<double> secondVector = { 3, 5, 4, 10,
                                        11.5, 22.6, 66.81, 9.99 };

        //За допомогою властивостей поліморфізму
        //виділяємо динамічно пам'ять для класу-функтора
        IBinaryFunction* binaryFunc = new Add();

        VectorsCalculator vectCalculator;

        //Розрахунок суми елементів двох векторів
        vectCalculator(firstVector, secondVector, binaryFunc);

        cout << "Сума елементів векторів: ";
        vectCalculator.printResult();

        //Звільнення пам'яті
        delete binaryFunc;

        binaryFunc = new Multiply();

        //Розрахунок множення елементів двох векторів
        vectCalculator(firstVector, secondVector, binaryFunc);

        cout << "\nМноження елементів векторів: ";
        vectCalculator.printResult();

        //Звільнення пам'яті
        delete binaryFunc;
    }
    catch (const exception& exception)
    {
        cout << exception.what() << endl;
    }
}