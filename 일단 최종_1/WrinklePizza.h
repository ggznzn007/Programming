#pragma once
#include "Store.h"

class WrinklePizza : public Store
{
public:
	WrinklePizza();

	virtual void showWelcom();
	virtual void cooking();
	virtual void delivery();
};