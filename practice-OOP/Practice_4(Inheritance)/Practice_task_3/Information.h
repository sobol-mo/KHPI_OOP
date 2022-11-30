#pragma once

#include "Warehouse.h"

class Information : public Warehouse
{
public:

	//Друк інформації про ігрушку
	void printInfoToy() const;

	//Друк інформації складу іграшок
	void printWarehouseInfo();
};