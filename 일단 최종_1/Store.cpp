#include "Store.h"

string Store::showStoreName() {
	return this->storeName;
}

void Store::drawMap() {
	for (int x = 10; x <= 80; x++) {
		for (int y = 2; y <= 26; y++) {
			if (x == 10 || x == 80 || y == 2 || y == 26) {
				gotoxy(x, y);
				puts("*");
			}
		}
	}
}

void Store::showMenu() {
	gotoxy(TX - 5, TY);
	this->showWelcom();
	gotoxy(TX - 5, TY + 2);
	cout << "  �̸�" << "\t\t" << "����";
	for (int i = 0; i < sizeof(menu) / sizeof(menu[0]); i++) {
		if (this->menu[i].foodPrice != 0) {
			gotoxy(TX - 5, TY + 4 + i);
			cout << i + 1 << ") " <<
				this->menu[i].foodName << "\t" <<
				this->menu[i].foodPrice;
		}
	}
}

void Store::choiceMenu() {
	system("cls");
	while (1) {
		this->totalPrice = 0;
		drawMap();
		showMenu();
		gotoxy(TX - 5, TY + 13);
		cout << "�޴� ���� (���� �Ϸ�� 0) : ";
		int selM;
		cin >> selM;
		if (selM == 0) break;
		--selM;
		gotoxy(TX - 5, TY + 15);
		cout << "���� ���� : ";
		int numF;
		cin >> numF;
		menu[selM].numOfFood += numF;
		if (this->storeName == "WrinklePizza" || this->storeName == "DoremiPizza") {
			this->extraTopping();
			this->pizzaSize();
		}
		gotoxy(TX - 20, TY + 17);
		cout << "������ �޴� : ";
		for (int i = 0; i < sizeof(menu) / sizeof(menu[0]); i++) {
			if (this->menu[i].numOfFood != 0)
				cout << this->menu[i].foodName << " " << this->menu[i].numOfFood;
			if (this->menu[i].numOfFood != 0)
				cout << "  ";
			this->totalPrice += this->menu[i].foodPrice * this->menu[i].numOfFood;
		}
		gotoxy(TX - 20, TY + 19);
		cout << "�� �ݾ� : " << this->totalPrice;
	}
}

void Store::checkAddress() {
	gotoxy(TX, TY + 19);
	cout << "�ּҸ� �Է��ϼ��� : ";
	cin >> this->address;
}

void Store::delivery() {
	gotoxy(TX + 17, 15);
	puts("==");
	gotoxy(TX + 16, 16);
	puts("====");
	gotoxy(TX + 16, 17);
	puts("|��|");
	gotoxy(TX + 16, 18);
	puts("�Ǣ�");
	int startX = TX - 10;
	for (int i = 0; i < 6; i++) {
		gotoxy(startX + 1, 17);
		puts("--|");
		gotoxy(startX, 18);
		puts("O  O");
		Sleep(1000);
		gotoxy(startX + 1, 17);
		puts("   ");
		gotoxy(startX, 18);
		puts("    ");
		startX += 3;
	}
	Sleep(1000);
}

void Store::extraTopping()
{
	string a;
	gotoxy(TX - 20, TY + 17);
	cout << "�����߰��� �Ͻðڽ��ϱ�? (y/n)";
	cin >> a;
	gotoxy(TX - 20, TY + 17);
	cout << "                                    ";
	int selSize;
	if (a == "y" || a == "Y")
	{
		gotoxy(TX - 20, TY + 17);
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
	}
}

void Store::pizzaSize()
{
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
}