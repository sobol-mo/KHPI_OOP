#include "DivisionSix.h"

//Конструктор за замовченням
DivisionSix::DivisionSix():
	m_sum(0),m_leftIndex(0), m_rightIndex(0)
{
}

//Сетер для правої межі
void DivisionSix::setRightIndex(const int index)
{
	m_rightIndex = index;
}

//Метод для підрахунку суми
int DivisionSix::calculateSum()
{
    m_leftIndex = 0;

    while (m_leftIndex <= m_rightIndex)
    {
        if (m_leftIndex % m_Number == 0)
        {
            m_sum += m_leftIndex;
        }
        m_leftIndex++;
    }
    return m_sum;
}