#pragma once

#include "Progression.h"

class GeometricProgression : public Progression
{
public:

	//������� ���������� ��������� ����������� �������
	virtual int getElement(const int elemNumber) override;

	//������� ���������� ���� ����������� ������� 
	virtual int getSum(const int elemNumber) override;
};