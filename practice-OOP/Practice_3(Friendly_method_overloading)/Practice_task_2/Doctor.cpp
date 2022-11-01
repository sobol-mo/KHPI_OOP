#include "Doctor.h"

//����������� � ����������
Doctor::Doctor(const string& namePatient)
{
    this->namePatient = namePatient;
}

//����� �������� �������� ��������
bool Doctor::hasPatient() const
{
    return (namePatient != "");
}

//�������������� ���������(<<)
ostream& operator<<(ostream& out, const Doctor& doc)
{
    out << "��'� ��������: " << doc.namePatient;

    return out;
}

//�������������� ���������(>>)
istream& operator>>(istream& in, Doctor& doc)
{
    if (!doc.hasPatient()) {

        in >> doc.namePatient;
    }
    else {

        cout << "������� ��� �������!" << endl;
    }

    return in;
}

//�������������� ������������ ����������
void Doctor::operator--(int)
{
    this->namePatient = "";
}
