#include "StringTester.h"

//Перевантаження оператора круглих дужок
void StringTester::operator()(const char* str) const
{

	//Група тестів для масиву char
	assert(str != NULL, "str == NULL");
	assert(*str != '\0', "str == \'\\0\'");
	assert(strlen(str) > 0, "length <= 0");
}