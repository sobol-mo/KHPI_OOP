#include "GeometricProgression.h"

//������� ���������� ��������� ����������� �������
int GeometricProgression::getElement(const int elemNumber)
{
	int tempElement = 1;

	for (int i = 0; i < elemNumber - 1; i++)
	{
		tempElement *= step;
	}

	return firstElement * tempElement;
}

//������� ���������� ���� ����������� ������� 
int GeometricProgression::getSum(const int elemNumber)
{
	if (step != 1) {
		return (getElement(elemNumber) * step - firstElement) / (step - 1);
	}
	else {
		return elemNumber * firstElement;
	}
}