#pragma once
#include "Store.h"
class DoremiPizza : public Store
{
public:
	DoremiPizza();
	
	virtual void showWelcom();
	virtual void cooking();
	virtual void delivery();
};

