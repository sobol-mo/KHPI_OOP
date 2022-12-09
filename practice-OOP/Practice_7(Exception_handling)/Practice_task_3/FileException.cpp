#include "FileException.h"

//Конструктор з параметром
FileException::FileException(const string& path, const int lineNumber, const int index)
{
	this->path = path;
	this->lineNumber = lineNumber + 1;
	this->index = index + 1;

	//Створення повідомлення
	this->message = path + ": " + to_string(this->lineNumber) +
		" , " + to_string(this->index);
}

//Група "гетерів"
string FileException::getPath() const
{
	return this->path;
}

int FileException::getLineNumber() const
{
	return this->lineNumber;
}

int FileException::getIndex() const
{
	return this->index;
}
