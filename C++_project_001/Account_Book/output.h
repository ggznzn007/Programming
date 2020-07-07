#pragma once
#include "AccountBook.h"
class output : public AccountBook
{
public:
	void Date();
	void IncomeList();
	int Income();
	void OutgoingList();
	void Outgoing();
	int calc();
};

