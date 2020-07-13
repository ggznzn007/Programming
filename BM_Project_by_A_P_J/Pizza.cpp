#include "Pizza.h"
Pizza::Pizza() {
	this->kindOf = "Pizza";
}
void Pizza::choiceMenu() {
	Store::choiceMenu();
	this->extraTopping();
	this->pizzaSize();
	gotoxy(TX - 20, TY + 19);
	cout << "                        ";
	gotoxy(TX - 20, TY + 19);
	cout << "�� �ݾ� : " << this->totalPrice;
}
void Pizza::extraTopping()
{
	string a;
	gotoxy(TX - 20, TY + 17);
	cout << "                                                            ";
	gotoxy(TX - 20, TY + 17);
	setcolor(0x000e, 0);
	cout << "�����߰��� �Ͻðڽ��ϱ�? (y/n) : ";
	cin >> a;
	gotoxy(TX - 20, TY + 17);
	cout << "                                    ";
	int selSize;
	if (a == "y" || a == "Y")
	{
		gotoxy(TX - 20, TY + 17);
		setcolor(0x0008, 0);
		cout << "1.ġ��(+1000��) 2.����������ũ(+3000��) 3.������(+2000)";
		gotoxy(TX - 20, TY + 18);
		cout << "���� ���� : ";
		cin >> selSize;
		gotoxy(TX - 20, TY + 17);
		cout << "                                                       ";
		gotoxy(TX - 20, TY + 18);
		cout << "             ";
		if (selSize == 1)
		{
			this->totalPrice += 1000;
		}
		else if (selSize == 2)
		{
			this->totalPrice += 3000;
		}
		else if (selSize == 3)
		{
			this->totalPrice += 2000;
		}
		setcolor(0x000f, 0);
	}
}
void Pizza::pizzaSize()
{
	setcolor(0x000d, 0);
	gotoxy(TX - 20, TY + 17);
	cout << "<1.Large(+ 3000��) 2.Medium 3.Small(-3000��)>>" << endl;
	gotoxy(TX - 20, TY + 18);
	cout << "������ ���� : ";

	int selSize;
	cin >> selSize;
	switch (selSize)
	{
	case 1:
		this->totalPrice += 3000; break;
	case 2: break;
	case 3:
		this->totalPrice -= 3000; break;
	}
	setcolor(0x000f, 0);
}