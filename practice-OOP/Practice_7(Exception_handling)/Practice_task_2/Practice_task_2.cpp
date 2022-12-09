/*

    Створити клас Stack. Стек реалізован
    за допомогою динамічного масиву.
    Полями класу є:
    - покажчик на стек;
    - розмір ємність стеку;
    - фактичний розмір.
    Методи класу Stack:
    - функція додавання елементу у стек;
    - функція вилучення елементу зі стеку;
    - друк стеку.

    Для кожного медоду зробити винятки, наприклад:
    - стек порожній;
    - стек заповнений.
    Для демонстрації програми передбачити зручний 
    інтерфейс.

*/

#include <Windows.h>
#include "Stack.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int sizeStack = 5;
    Stack stack(sizeStack);
    int auxiliaryVariable = 0;
    while (1)
    {
        try
        {
            cout << "1. Додати елемент" << endl;
            cout << "2. Вилучити елемент" << endl;
            cout << "3. Надрукувати стек" << endl;
            cout << " -> "; cin >> auxiliaryVariable;

            switch (auxiliaryVariable)
            {
            case 1:
                cout << "Введіть число: ";
                cin >> auxiliaryVariable;
                stack.push(auxiliaryVariable);
                cout << endl;
                break;
            case 2:
                cout << "Вилучений елемент: " << stack.pop() << "\n\n";
                break;
            case 3:
                stack.printStack();
                cout << endl;
                break;
            default:
                break;
            }
        }
        catch (const exception& exception)
        {
            cout << exception.what() << endl;
        }
    }

}