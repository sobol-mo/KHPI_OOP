#pragma once


class Progression
{
protected:

	//������ ������� �������
	int firstElement;

	//��� �������
	int step;
	
public:

	//����������� � �����������
	Progression(const int step = 0,
		const int firstElement = 0);

	//����� "������"
	int getFirstElement() const;
	int getStep() const ;

	//����� "������"
	void setFirstElement(const int firstEl);
	void setStep(const int step);

	//����� ��������� ������� ���������� �������� �������
	virtual int getElement(const int elemNumber) = 0;

	//����� ��������� ������� ���������� ���� �������
	virtual int getSum(const int elemNumber) = 0;
};