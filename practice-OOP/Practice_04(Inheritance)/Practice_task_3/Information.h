#pragma once

#include "WarehouseInfo.h"

class Information : public WarehouseInfo
{
public:

	//Друк інформації про іграшку
	void printInfoToy() const;

	//Друк інформації складу іграшок
	void printWarehouseInfo();
};