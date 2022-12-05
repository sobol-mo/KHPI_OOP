#include "ArithmeticProgression.h"

//������� ���������� ��������� ����������� �������
int ArithmeticProgression::getElement(const int elemNumber)
{
    return firstElement + step * (elemNumber - 1);
}

//������� ���������� ���� ����������� �������
int ArithmeticProgression::getSum(const int elemNumber)
{
    return (firstElement + getElement(elemNumber)) * elemNumber / 2;
}