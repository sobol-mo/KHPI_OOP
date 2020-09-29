/*
    Лабораторная работа №4
    Работа с динамической памятью в языке С++
    Вариант №30
    Пример выполнения

    После рефакторинга
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <cstdlib>
//#include <cstring>
#include <iomanip>
#include "windows.h"
using namespace std;

class church
{
public:

    friend ostream& operator<<(ostream& stream, church& o1);
    friend istream& operator>>(istream& stream, church& o1);
    friend void shapka();
    friend void linebuild();

    church();
    church(const char* a, char b, unsigned int c, float d);
    void set(const char* a, char b, unsigned int c, float d);
    void get(char* a, char b, unsigned int c, float d);
    void show();
    char* ret_name();
private:
    char* name;
    char school;
    unsigned int count;
    unsigned short square;
};

class DB
{
    char title[30];
    church* rows[12];
    int col;
    int sorted;
public:
    DB(const char* q);
    ~DB();
    void add_rec(const char* a, char b, unsigned int c, float d);
    void del_rec();
    void sort_DB();
    friend ostream& operator<<(ostream& stream, DB& temp);
};

DB::DB(const char* q)
    : col(0), sorted(0)
{
    strcpy(title, q);
}

DB::~DB()
{
    if (col)
    {
        for (int i = 0; i < col; i++)
            delete rows[i];
    }
}

void DB::add_rec(const char* a, char b, unsigned int c, float d)
{
    if (col >= 12)
        return;
    else col++;
    rows[col - 1] = new church(a, b, c, d);
    sorted = 0;
}

void DB::del_rec()
{
    if (col <= 0)
        return;
    delete rows[col - 1];
    col--;
}

void DB::sort_DB()
{
    char* s1;
    char* s2;
    if (col < 2)
        return;
    church* temp;

    for (int i = 0; i < col; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            s1 = rows[i]->ret_name();
            s2 = rows[j]->ret_name();
            if (strcmp(s1, s2) > 0)
            {
                temp = rows[i];
                rows[i] = rows[j];
                rows[j] = temp;
            }
        }
    }
    sorted = 1;
}

void shapka()
{
    cout << "_______________________________________________________________\n";
    cout << "|         Буддистские монастыри Японии периода Нара           |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "|  Название  | Школа | Количество монахов | Площадь земли(га) |\n";
    cout << "|-------------------------------------------------------------|\n";
}

void linebuild()
{
    cout << "\n|-------------------------------------------------------------|\n";
}

ostream& operator<<(ostream& stream, DB& o1)
{
    stream << o1.title << endl;
    if (o1.sorted == 0)
        stream << "Таблица не отсортирована.\n";
    else
        stream << "Таблица отсортирована.\n";
    shapka();
    if (!o1.col)
        stream << "Таблица пуста.";
    else
    {
        for (int i = 0; i < o1.col; i++)
            stream << *o1.rows[i];
    }
    return stream;
}

ostream& operator<<(ostream& stream, church& o1)
{
    stream << "|" << setw(10) << o1.name << "  |  ";
    stream << setw(5) << o1.school << "|";
    stream << setw(18) << o1.count << "  |";
    stream << setw(17) << o1.square << "  |";
    linebuild();
    return stream;
}

church::church()
    : count(0), square(0)
{

}

church::church(const char* a, char b, unsigned int c, float d)
    : school(b), count(c), square(d)
{
    name = new char[strlen(a) + 1];
    strcpy(name, a);
}

void church::set(const char* a, char b, unsigned int c, float d)
{
    strcpy(name, a);
    school = b;
    count = c;
    square = d;
}

void church::show()
{
    cout << name << " ";
    cout << school << " ";
    cout << count << " ";
    cout << square << " ";
}

void church::get(char* a, char b, unsigned int c, float d)
{
    strcpy(a, name);
    b = school;
    c = count;
    d = square;
}

char* church::ret_name()
{
    return name;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char* n;
    char t;
    unsigned int s;
    float h;
    short i;
    short q, q1;

    DB* tmp = new DB("\nБАЗА ДАННЫХ ╧1\n");

    for (int a = 0; !a;)
    {
        cout << "1. Добавить запись\n";
        cout << "2. Удалить запись\n";
        cout << "3. Сортировать базу\n";
        cout << "4. Вывести базу\n";
        cout << "5. Выход\n";
        cout << "> ";
        int p;
        cin >> p;
        switch (p)
        {
        case 1:
            cout << "Наименование, Тип, Посевная площадь, Урожайность \n";

            /*
            n = new char[32]; // Закомментированные строки отвечают за чтение значений
            cin >> n;         // переменных с клавиатуры и записи их в поля объекта.
            cin >> t;         // Для удобства работы используется инициализация через
            cin >> s;         // конструктор 3-х объектов.
            cin >> h;
            tmp->add_rec(n,t,s,h);
            delete[] n;
            */

            tmp->add_rec("Totaidzy", 'T', 220, 368.8f);
            tmp->add_rec("Yakusidzy", 'C', 50, 54.7f);
            tmp->add_rec("Daiandzy", 'D', 10, 12.2f);
            break;
        case 2:
            tmp->del_rec();
            break;
        case 3:
            tmp->sort_DB();
            break;
        case 4:
            cout << *tmp;
            cout << "\nНажмите клавишу для продолжения...";
            getchar();
            break;
        case 5:
            a = 1;
            break;
        default:
            cout << "Неверный вызов";
            getchar();
            break;
        }
    }
    return 0;
}
