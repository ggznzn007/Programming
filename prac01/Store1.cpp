#include "Store1.h"

string Store1::showStoreName()
{
	return this->storeName;
}

void Store1::drawMap()
{
	for (int x = 10; x <= 80; x++)
	{
		for (int y = 2; y <= 26; y++)
		{
			if (x == 10 || x == 80 || y == 2 || y == 26)
			{
				gotoxy(x, y);
				puts("*");
			}
		}
	}
}

void Store1::showMenu()
{
	gotoxy(TX - 5, TY);
	this->showWelcom();
	gotoxy(TX - 5, TY + 2);
	cout << "  �̸�" << "        " << "����";
	for (int i = 0; i < sizeof(menu) / sizeof(menu[0]); i++)
	{
		if (this->menu[i].foodPrice != 0)
		{
			gotoxy(TX - 5, TY + 4 + i);
			cout << i + 1 << ") " <<
				this->menu[i].foodname << "    " <<
				this->menu[i].foodPrice;
		}
	}
}
void Store1::choiceMenu()
{
	system("cls");
	while (true)
	{
		this->totalPrice = 0;
		drawMap();
		showMenu();
		gotoxy(TX - 5, TY + 13);
		cout << "�޴� ���� (���� �Ϸ�� 0) : ";
		int selM;
		cin >> selM;
		if (selM == 0) break;
		--selM;// �ֳܼ��� ��ġ ����
		gotoxy(TX - 5, TY + 15);
		cout << "���� ���� : ";
		int numF;
		cin >> numF;
		menu[selM].numOfFood += numF;//�����޴� ����
		if (this->storeName == "WrinklePizza" ||
			this->storeName == "DoremiPizza")
		{
			this->extraTopping();
			this->pizzSize();
		}
		gotoxy(TX - 20, TY + 17);
		cout << "������ �޴� : ";
		for (int i = 0; i < sizeof(menu) / sizeof(menu[0]); i++)
		{
			if (this->menu[i].numOfFood != 0)
				cout << this->menu[i].foodname << " " << this->menu[i].numOfFood;
			if (this->menu[i].numOfFood != 0)
				cout << "  ";
			this->totalPrice += this->menu[i].foodPrice * this->menu[i].numOfFood;
		}
		gotoxy(TX - 20, TY + 19);
		cout << "�� �ݾ� : " << this->totalPrice;
	}	
}

void checkAddress();

void cooking();
void delivery();

