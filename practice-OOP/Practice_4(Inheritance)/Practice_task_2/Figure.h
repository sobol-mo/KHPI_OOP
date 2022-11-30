#pragma once

class Figure
{
private:

	//Розміри фігури
	int figureLong;
	int figureWidth;

public:

	//Конструктор з параметрами
	Figure(const int fLong = 0,
		const int fWidth = 0);

	//Група "гетерів"
	int getLong() const;
	int getWidth() const;

	//Група "сетерів"
	void setLong(const int fLong);
	void setWidth(const int fWidth);

};