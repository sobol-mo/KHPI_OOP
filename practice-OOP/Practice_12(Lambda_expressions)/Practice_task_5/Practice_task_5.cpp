/*

    Створити клас RandomFunction. У класі
    наявне перевантаження оператора круглих
    дужок, яке повертає випадкову математичну
    функцію(лямбда-вираз). Наявні функції:
    - функція підсумовування;
    - функція віднімання;
    - функція множення;
    - функція ділення.
    Також у класі наявна функція, яка перевіряє 
    правильність введеного знаку.

    За допомогою класу створити міні-гру, у якій
    треба відгадати знак математичного виразу.
    Для цього треба:
    - згенерувати два числа;
    - згенерувати випадкову математичну функцію, і
    підрахувати результат виразу;
    - роздрукувати вираз на екрані, він має такий вид: "x ? y = z";
    - зчитати з екрана знак і перевірити його.

*/

#include <Windows.h>
#include "RandomFunction.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    //Оголошення об'єкту класу RandomFunction
    RandomFunction mathFunctions;

    //Допоміжні змінні
    int firstNumber = 0;
    int secondNumber = 0;
    int result = 0;
    char mathSymbol;

    try
    {
        while (true)
        {

            //Генеруємо два числа
            firstNumber = getRandomNumber(10, 20);
            secondNumber = getRandomNumber(1, 10);

            //Генерація випадкової математичної функції
            auto resultFunc = mathFunctions();

            //Підраховуємо результат виразу
            result = resultFunc(firstNumber, secondNumber);

            cout << firstNumber << " ? " << secondNumber
                << " = " << result;

            cout << "\nВведіть математичний символ(+, -, *, /): ";
            cin >> mathSymbol;

            //Перевірка введеного символу
            if (mathFunctions.symbolCheck
                (firstNumber, secondNumber, result, mathSymbol)) 
            {
                cout << "Ви вгадали символ!\n\n";
            }
            else {
                cout << "Ви не вгадали символ!\n\n";
            }
        }
    }
    catch (const exception& exception)
    {
        cout << exception.what() << endl;
    }
}