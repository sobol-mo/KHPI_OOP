/*

    Створити клас Phone.
    Поля: 
    - код оператора;
    - номер телефону.
    Методи:
    - конструктори;
    - функції доступу до полів get()/set().

    Створити клас Student.
    Поля: 
    - ім'я студента;
    - масив номерів телефону(2 номери);
    - статичний лічильник кількості студентів; 
    - номер групи(константа).
    Методи:
    - конструктори;
    - функція друку інформації.

*/

#include "Student.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    //Ініціалізація першого студента
    Student studentFirst;

    //Друк першого об'єкту
    studentFirst.printInfo();
    cout << endl;

    //Ініціалізація другого студента
    Student studentSecond("Denis", 321, 51254,
        999312, 45, 67);

    //Друк другого об'єкту
    studentSecond.printInfo();
    cout << endl;

    //Ініціалізація третього студента
    Student studentThird("Andrey", 321, 066456,
        077634, 31, 70);

    //Друк третього об'єкту
    studentThird.printInfo();
}