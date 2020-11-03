/**************************************************/
/*            Лабораторная работа №6              */
/*           Массивы объектов. Ссылки.            */
/*         Пример решения. Вариант №30.           */
/**************************************************/
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
#include <string>     // std::string, std::to_string
#include "windows.h"
class phone
{
public:
    phone()
        : number(0), data(nullptr), lock(0), name(nullptr)
    {
    }

    void change(long _num, const char* _data, int _lck, const char* _name);

    void setName(const char* _name);

    long getNumber() const;
    const char* getName() const;
    const char* getData() const;
    int getLock() const;
private:
    long  number;
    char* data;
    int   lock;
    char* name;
};

void phone::change(long  _num, const char* _data, int _lck, const char* _name)
{
    number = _num;
    lock = _lck;
    if (data)
        free(data);
    data = new char[strlen(_data) + 1];
    strcpy(data, _data);
    if (name)
        free(name);
    name = new char[strlen(_name) + 1];
    strcpy(name, _name);
}

void phone::setName(const char* _name)
{
    if (name)
        free(name);
    name = new char[strlen(_name) + 1];
    strcpy(name, _name);
}

long phone::getNumber() const
{
    return number;
}

const char* phone::getName() const
{
    return name;
}

const char* phone::getData() const
{
    return data;
}

int phone::getLock() const
{
    return lock;
}

void sort(phone* objs, std::size_t count)
{
    phone t;
    for (std::size_t i = 0; i < count; i++)
    {
        for (std::size_t j = i + 1; j < count; j++)
        {
            if (objs[i].getNumber() > objs[j].getNumber())
            {
                t = objs[i];
                objs[i] = objs[j];
                objs[j] = t;
            }
        }
    }
}

void show(phone* objs, std::size_t count)
{
    std::cout << "                            ТЕЛЕФОН: \n";
    std::cout << "----------------------------------------------------------------\n";
    std::cout << "   Номер     Дата установки     Блокиратор     Фамилия абонента \n";
    std::cout << "----------------------------------------------------------------\n";

    std::string s;
    for (std::size_t i = 0; i < count; i++)
    {
        s = std::to_string(objs[i].getNumber());
        if (s.length() == 6)
        {
            std::cout << ' ' << s[0] << s[1] << "-" << s[2] << s[3] << "-" << s[4] << s[5];
        }
        else if (s.length() == 7)
        {
            std::cout << s[0] << s[1] << s[2] << "-" << s[3] << s[4] << "-" << s[5] << s[6];
        }
        std::cout << std::setw(15) << objs[i].getData();
        if (objs[i].getLock() == 0)
            std::cout << std::setw(15) << "-";
        else if (objs[i].getLock() == 1)
            std::cout << std::setw(15) << "+";
        std::cout << std::setw(25) << objs[i].getName() << std::endl;
    }
    std::cout << "----------------------------------------------------------------\n";
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int r = 0;

    phone objs[7];

    for (int a = 0; !a;)
    {
        std::cout << "1. Add record\n";
        std::cout << "2. Sort phone base\n";
        std::cout << "3. Print out base\n";
        std::cout << "4. Quit\n";
        std::cout << "> ";
        int p;
        std::cin >> p;
        switch (p)
        {
        case 1:
        {
            objs[0].change(921034, "12.05.99", 1, "Ivanov");
            objs[1].change(1002010, "17.12.85", 0, "Petrov");
            objs[2].change(109231, "02.01.80", 1, "Sidorov");
            objs[3].change(324439, "27.07.94", 0, "Selivanov");
            objs[4].change(1251367, "20.10.01", 1, "Il'in");
            objs[5].change(173167, "10.01.83", 0, "Khrushchev");
            objs[6].change(134367, "11.06.79", 0, "Kozlov");
            r = 1;
            break;
        }
        case 2:
        {
            if (r == 0)
            {
                std::cout << "В базе нет записей.";
                getchar();
            }
            else if (r == 1)
                sort(objs, 7);
            break;
        }

        case 3:
        {
            if (r == 0)
                std::cout << "В базе нет записей.";
            else if (r == 1)
                show(objs, 7);
            getchar();
            break;
        }
        case 4:
        {
            a = 1;
            break;
        }
        default:
        {
            std::cout << "Неверный вызов!";
            getchar();
            break;
        }
        }
    }
    return 0;
}