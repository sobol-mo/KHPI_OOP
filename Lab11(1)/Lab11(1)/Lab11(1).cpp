
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
#define N 3

class church {
    char name[10];
    char school;
    unsigned int count;
    float square;
public:
    void set(char* a, char b, unsigned int c, float d);
    void get(char* a, char& b, unsigned int& c, float& d);
    void show(void);
};

void church::set(char* a, char b, unsigned int c, float d) {
    strcpy(name, a);
    school = b;
    count = c;
    square = d;
}

void church::get(char* a, char& b, unsigned int& c, float& d)
{
    //delete[] a;
    //a = new char[strlen(name) + 1];
    strcpy(a, name);
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
    char n[10];
    //n = new char[10];
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
    //delete[] n;
    return 0;
}