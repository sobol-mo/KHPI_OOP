#pragma once

class Figure
{
private:

	//Розміри фігури
	int figureLength;
	int figureWidth;

public:

	//Конструктор з параметрами
	Figure(const int fLength = 0,
		const int fWidth = 0);

	//Група "гетерів"
	int getLength() const;
	int getWidth() const;

	//Група "сетерів"
	void setLength(const int fLength);
	void setWidth(const int fWidth);

};