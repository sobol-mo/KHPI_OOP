/*

    Сторити клас-функтор ArrayFile, в
    якому наявне перевантаження оператора
    круглих дужок. Перевантаженний оператор
    повертає випадкове число з файлу.

    Оголосити vector з типом int на 20 
    елементів. Заповнити вектор таким чином:
    - індекс вектору менше 5, кожне наступне число
    збільшується на 1;
    - індекс у межах від 5 до 10, кожне наступне число
    збільшується на 5;
    - індекс більше 10, кожне наступне число
    збільшується вдвічі.
    
    Роздрукувати вектор. Змінити всі числа у векторі 
    за допомогою функції transform. Якщо число менше 
    1000 помножити його на 3, в іншому випадку зчитати 
    випадкове число з файлу і замінити.

*/

#include <Windows.h>
#include <algorithm>
#include "ArrayFile.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    //Оголошуємо вектора на 20 елементів
    vector<int> array(20);

    //Оголошення об'єкту класу ArrayFile
    ArrayFile randomNumberFile;

    //Шлях до файлу з масивом
    string path = "arrayFile.txt";

    //Змінна, яка відстежує індекс вектора
    int index = 0;

    //Змінна, яка відповідає з якого числа
    //починається послідовність
    int initValue = 0;

    generate(array.begin(), array.end(),
        [index, initValue]() mutable {

            int returnedValue = 0;

            if (index < 5) {
                
                returnedValue = ++initValue;
            }
            else if (index >= 5 && index < 10) {

                returnedValue = initValue += 5;
            }
            else {

                returnedValue = initValue *= 2;
            }
            
            //Збільшуємо індекс, але 
            //зовні змінна не збільшується
            index++;
            return returnedValue;
        });

    cout << " --- Заповнений вектор ---\n";
    for_each(array.begin(), array.end(),
        [](const int value) {
            cout << value << " ";
        });

    //Зміна вектора
    transform(array.begin(), array.end(), array.begin(),

        //randomNumberFile передаємо за допомогою посилання,
        //path передаємо за значенням(конструктор копіювання)
        [&randomNumberFile, path](const int value) {

            //Якщо значення більше 1000, повертаємо 
            //випадкове число з файлу
            if (value > 1000){
                return randomNumberFile(path);
            }
            else {
                return value * 3;
            }
        });

    cout << "\n\n--- Змінений вектор ---\n";
    for_each(array.begin(), array.end(),
        [](const int value) {
            cout << value << " ";
        });
}