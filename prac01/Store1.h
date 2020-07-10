#pragma once
#include <iostream>
#include <combaseapi.h>
#include <string>
#include <Windows.h>
#include "turboc.h"

#define TX 37
#define TY 5

using namespace std;

class Store1
{
protected:
	string storeName;
	int totalPrice = 0;
	string address;
	struct Menu
	{
		string foodname;
		int foodPrice = 0;
		int numOfFood = 0;
	};
	Menu menu[10];

public:
	string showStoreName();
	void drawMap();

	virtual void showWelcom() = 0;

	void showMenu();
	void choiceMenu();

	void checkAddress();

	virtual void cooking() = 0;
	virtual void delivery();

	//피자관련
	void pizzSize();
	void extraTopping();
};

