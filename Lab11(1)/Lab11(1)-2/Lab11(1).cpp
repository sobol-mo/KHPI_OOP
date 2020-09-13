/*******************************************************/
/*           Лабораторная  работа 11(1)                */
/*     Простые классы. Доступ к элементам класса       */
/*        Пример выполнения. Вариант #30.              */
/*******************************************************/
// После рефакторинга char на string
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
#define N 3

class church {
    string name;
    char school;
    unsigned int count;
    float square;
public:
    void set(string a, char b, unsigned int c, float d);
    void get(string a, char& b, unsigned int& c, float& d);
    void show(void);
};

void church::set(string a, char b, unsigned int c, float d) {
    name = a;
    school = b;
    count = c;
    square = d;
}

void church::get(string a, char& b, unsigned int& c, float& d)
{
    a = name;
    b = school;
    c = count;
    d = square;
}

void church::show(void) {
    cout << name << " ";
    cout << school << " ";
    cout << count << " ";
    cout << square << " ";
}


int main(void) {
    setlocale(LC_ALL, "ru");
    string n;
    char t;
    unsigned int s;
    float h;
    short i;

    church obj[N];
    system("cls");
    cout << "Работа функции SET!\n";
    for (i = 0; i < N; i++)
    {
        cout << "Название, Школа, Количество монахов, Площадь земли: ";
        cin >> n;
        cin >> t;
        cin >> s;
        cin >> h;
        obj[i].set(n, t, s, h);
    }
    cout << "Работа функции SHOW!\n";
    cout << "Название, Школа, Количество монахов, Площадь земли: \n";
    for (i = 0; i < N; i++)
    {
        obj[i].show();
        cout << "\n";
    }
    cout << "Работа функции GET и SHOW!\n";
    cout << "Название, Школа, Количество монахов, Площадь земли: \n";
    for (i = 0; i < N; i++)
    {
        obj[i].get(n, t, s, h);
        obj[i].show();
        cout << "\n";
    }
    _getch();
    return 0;
}