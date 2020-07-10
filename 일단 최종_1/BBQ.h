#pragma once
#include "Store.h"

class BBQ : public Store {
	
public:
	BBQ();
	
	virtual void showWelcom();
	virtual void cooking();
	virtual void delivery();
};