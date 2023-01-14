/*

    Створити клас MyException, за допомогою якого
    відбуватиметься обробка винятків. Полем класу є 
    повідомлення про помилку. Методи класу:
    - конструктор з параметром;
    - функція what, яка повертає повідомлення.

    Створити клас Calculator. В класі наявні методи:
    - сума двох чисел;
    - множення двох чисел;
    - різниця двох чисел;
    - ділення двох чисел.
    Виключення:
    - сума: якщо хоча б одне число від'ємне;
    - множення: хоча б одне число дорівнює 0;
    - різниця: якщо різниця від'ємна;
    - ділення: дільник дорівнює 0.

    Передбачити зручний інтерфейс для роботи програми.

*/

#include <Windows.h>
#include "Calculator.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int firstNumber = 0;
    int secondNumber = 0;
    Calculator calculator;

    while (true)
    {
        cout << "1. Порахувати суму" << endl;
        cout << "2. Порахувати різницю" << endl;
        cout << "3. Порахувати множення" << endl;
        cout << "4. Порахувати ділення" << endl;
        cout << " -> "; cin >> firstNumber;

        try
        {
            switch (firstNumber)
            {
            case 1:
                cout << "Введіть два числа: ";
                cin >> firstNumber >> secondNumber;
                cout << "Сума дорівнює: " <<
                    calculator.sum(firstNumber, secondNumber) << endl;
                break;
            case 2:
                cout << "Введіть два числа: ";
                cin >> firstNumber >> secondNumber;
                cout << "Різниця дорівнює: " <<
                    calculator.difference(firstNumber, secondNumber) << endl;
                break;
            case 3:
                cout << "Введіть два числа: ";
                cin >> firstNumber >> secondNumber;
                cout << "Множення дорівнює: " <<
                    calculator.multiplication(firstNumber, secondNumber) << endl;
                break;
            case 4:
                cout << "Введіть два числа: ";
                cin >> firstNumber >> secondNumber;
                cout << "Ділення дорівнює: " <<
                    calculator.division(firstNumber, secondNumber) << endl;
                break;
            default:
                exit(0);
                break;
            }
        }
        catch (const MyException& exception)
        {
            cout << exception.what() << endl;
        }
    }
}