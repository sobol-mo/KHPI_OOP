#include "Doctor.h"

//Конструктор з параметром
Doctor::Doctor(const string& namePatient)
{
    this->namePatient = namePatient;
}

//Метод перевірки наявності пацієнта
bool Doctor::hasPatient() const
{
    return (namePatient != "");
}

//Перевантаження оператора(<<)
ostream& operator<<(ostream& out, const Doctor& doc)
{
    out << "Ім'я пацієнта: " << doc.namePatient;

    return out;
}

//Перевантаження оператора(>>)
istream& operator>>(istream& in, Doctor& doc)
{
    if (!doc.hasPatient()) {

        in >> doc.namePatient;
    }
    else {

        cout << "Пацієнт вже наявний!" << endl;
    }

    return in;
}

//Перевантаження постфіксного декримента
void Doctor::operator--(int)
{
    this->namePatient = "";
}
