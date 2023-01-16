#pragma once

#include "FileException.h"
#include <fstream>

class FileChecker
{
private:

    //Шуканий символ
    char checkSymbol;

public:

    //Конструктор з параметром
    FileChecker(const char checkSymbol);

    //Гетер поля класу
    char getCheckSymbol() const;
    
    //Сетер поля класу
    void setCheckSymbol(const char checkSymbol);

    //Функція пошуку символу у файлі
    void checkFile(const string& path) const;
};