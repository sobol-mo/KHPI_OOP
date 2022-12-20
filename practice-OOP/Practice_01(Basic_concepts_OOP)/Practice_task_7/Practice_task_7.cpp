/*

    Створити клас MyArray, який реалізовує 
    дінамічний масив. 
    Поля: 
    - покажчик на масив (int);
    - розмір масиву.
    Методи класу: 
    - конструктори (базовий та з параметрами);
    - деструктор;
    - друк масиву;
    - додавання елементу у кінець масиву;
    - сортування масиву.
    Функції(не класу):
    - функція отримання випадкового числа.  

*/

#include "MyArray.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int tempNumber = 0;
    bool type = 1;
    cout << "Введіть кількість елеметнів масиву " <<
        "і тип заповнення(0 - вручну, 1 - автоматично): ";
    cin >> tempNumber >> type;

    //Ініціалізація об'єкту класу та друк
    MyArray array(tempNumber, type);
    array.printArray();
    cout << endl;

    //Додавання числа у кінець масиву
    cout << "Введіть число для додавання в кінець: ";
    cin >> tempNumber;
    array.pushBack(tempNumber);
    array.printArray();
    cout << endl;
  
    //Сортування масиву та друк
    cout << " --- Сортування масиву --- " << endl;
    array.sortArray();
    array.printArray();
}