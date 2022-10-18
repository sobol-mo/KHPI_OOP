/*

    Створити клас Phone, поля: код оператора,
    номер телефону.
    Методи:
    - Конструктори
    - Функції доступу до полів get()/set()

    Створити клас Student, поля: ім'я студента,
    масив номерів телеф.(2 номери), статичний лічильник кількості
    студентів, номер групи(константа)
    Методи:
    - Конструктори
    - Функцію друку інформації

*/

#include "Student.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    Student studentFirst;
    studentFirst.printInfo();
    cout << endl;

    Student studentSecond("Denis", 321, 51254, 999312, 45, 67);
    studentSecond.printInfo();

}