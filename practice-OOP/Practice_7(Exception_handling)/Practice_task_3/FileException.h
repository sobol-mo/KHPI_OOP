#pragma once

#include "Exception.h"

class FileException : public Exception
{
private:
	string path;
	int lineNumber;
	int index;

public:

	//Конструктор з параметром
	FileException(const string& path, const int lineNumber,
		const int index);

	//Група "гетерів"
	string getPath() const;
	int getLineNumber() const;
	int getIndex() const;
};