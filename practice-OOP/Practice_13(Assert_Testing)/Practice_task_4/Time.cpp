#include "Time.h"

//Конструктор з параметром за замовчуванням
Time::Time(const int hours, const int minutes, const int seconds)
{

	//За допомогою assert перевіряємо
	//коректність даних
	assert(hours <= 23 && hours >= 0);
	assert(hours <= 59 && hours >= 0);
	assert(seconds <= 59 && seconds >= 0);

	this->hours = hours;
	this->minutes = minutes;
	this->seconds = seconds;
}

//Група сетерів класу
Time& Time::setHours(const int hours)
{
	assert(hours <= 23 && hours >= 0);

	this->hours = hours;

	//Повертаємо поточний об'єкт
	//для ланцюжка викликів методів
	return *this;
}


Time& Time::setMinutes(const int minutes)
{
	assert(hours <= 59 && hours >= 0);

	this->minutes = minutes;

	return *this;
}

Time& Time::setSeconds(const int seconds)
{
	assert(seconds <= 59 && seconds >= 0);

	this->seconds = seconds;

	return *this;
}

//Перевантаження оператора(==) для порівняння часу
bool Time::operator==(const Time& time) const
{
	return hours == time.hours &&
	       minutes == time.minutes &&
	       seconds == time.seconds;
}

//Перевантаження оператора(<<)
ostream& operator<<(ostream& out, const Time& time)
{
	return out << time.hours   << ":"
	           << time.minutes << ":"
	           << time.seconds;
}