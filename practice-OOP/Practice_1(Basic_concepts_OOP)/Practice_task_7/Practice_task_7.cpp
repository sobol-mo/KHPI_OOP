/*

    Створити клас MyArray, який реалізовує 
    дінамічний масив. 
    Поля: 
    - Покажчик на масив (int)
    - Розмір масиву
    Методи класу: 
    - Конструктори (базовий та з параметрами)
    - Деструктор
    - Друк масиву
    - Додавання елементу у кінець масиву
    - Сортування масиву

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

    MyArray array(tempNumber, type);
    array.printArray();
    cout << endl;

    cout << "Введіть число для додавання в кінець: ";
    cin >> tempNumber;
    array.pushBack(tempNumber);
    array.printArray();
    cout << endl;
  
    cout << " --- Сортування масиву --- " << endl;
    array.sortArray();
    array.printArray();
}