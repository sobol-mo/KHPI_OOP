#pragma once

#include "Progression.h"

class ArithmeticProgression : public Progression
{
public:

	//������� ���������� ��������� ����������� �������
	virtual int getElement(const int elemNumber) override;

	//������� ���������� ���� ����������� ������� 
	virtual int getSum(const int elemNumber) override;
};