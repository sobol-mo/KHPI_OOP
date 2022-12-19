#include "FileInfo.h"

//Конструктор з параметрами за замовчуванням
FileInfo::FileInfo(const string& path, const int creationYear,
	const int requestsNumber)
{
	this->path = path;
	this->creationYear = creationYear;
	this->requestsNumber = requestsNumber;
}

//Конструктор копіювання
FileInfo::FileInfo(const FileInfo& file)
{
	this->path = file.path;
	this->creationYear = file.creationYear;
	this->requestsNumber = file.requestsNumber;
}

//Група "гетерів" класу
string FileInfo::getPath() const
{
	return this->path;
}

int FileInfo::getCreationYear() const
{
	return this->creationYear;
}

int FileInfo::getRequestsNumber() const
{
	return this->requestsNumber;
}

//Перевантаження оператора(=)
FileInfo& FileInfo::operator=(const FileInfo& file)
{
	this->path = file.path;
	this->creationYear = file.creationYear;
	this->requestsNumber = file.requestsNumber;

	return *this;
}

//Перевантаження оператора(<<)
ostream& operator<<(ostream& out, const FileInfo& file)
{
	out << file.path << " "
		<< file.creationYear << " "
		<< file.requestsNumber;

	return out;
}

//Перевантаження оператора(>>)
istream& operator>>(istream& in, FileInfo& file)
{
	return in >> file.path
	          >> file.creationYear 
	          >> file.requestsNumber;
}