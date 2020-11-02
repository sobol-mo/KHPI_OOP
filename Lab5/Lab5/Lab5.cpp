/**************************************************/
/*            Лабораторная работа №5              */
/*Использование библиотеки ввода-вывода языка С++ */
/*         Пример решения. Вариант №24.           */
/**************************************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "windows.h"
class array
{
public:
    array();
    char a[100];

    friend std::ostream& operator>>(std::ostream& stream, const array& arr);
};

array::array()
{
    for (int i = 0; i < 100; i++)
    {
        a[i] = rand() % 0x20 + 0x20;
        if (rand() % 20 > 10)
            a[i] = ' ';
    }
}

std::ostream& operator<<(std::ostream& stream, const array& arr)
{
    for (int i = 0; i < 100; i++)
        stream << arr.a[i];
    return stream;
}


class probasta
{
public:
    void operator>>(std::ostream& stream);
    void operator<<(const array& tst);

    friend std::ostream& operator <<(std::ostream& stream, const probasta& prob);
private:
    array ar;
};

std::ostream& operator<<(std::ostream& stream, const probasta& prob)
{
    for (int i = 0; i < 100; i++)
    {
        if ((i == 30) or (i == 60) or (i == 90))
            stream << "\n";
        if (prob.ar.a[i] != 0x20)
        {
            if (prob.ar.a[i] >= '0' and prob.ar.a[i] <= '9')
                stream << "#" << prob.ar.a[i];
            else
                stream << (char)toupper(prob.ar.a[i]);
        }
    }
    return stream;
}

void probasta::operator<<(const array& tst)
{
    ar = tst;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(nullptr));

    array ar_test;
    std::cout << "Строка в оригинале:\n";
    std::cout << ar_test << std::endl;
    std::cout << "Обработаная строка:\n";
    probasta test;
    test << ar_test;
    std::cout << test;
    return 0;
}