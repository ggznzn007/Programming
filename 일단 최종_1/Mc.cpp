#include "Mc.h"

Mc::Mc() {
	this->storeName = "�Ƶ�����";
	this->menu[0].foodName = "��� ";
	this->menu[0].foodPrice = 5500;
	this->menu[1].foodName = "��������";
	this->menu[1].foodPrice = 5500;
	this->menu[2].foodName = "����ġ��";
	this->menu[2].foodPrice = 5300;
	this->menu[3].foodName = "����Ұ��";
	this->menu[3].foodPrice = 5500;
	this->menu[4].foodName = "1955����";
	this->menu[4].foodPrice = 7000;
}

void Mc::showWelcom() {
	cout << "ȯ���մϴ�~ '" << storeName << "'�Դϴ�~!";
}

void Mc::cooking() {
	for (int i = 0; i < sizeof(this->menu) / sizeof(this->menu[0]); i++) {
		if (this->menu[i].numOfFood != 0) {
			for (int j = 0; j < menu[i].numOfFood; j++) {
				system("cls");
				drawMap();
				gotoxy(TX - 7, TY);
				cout << "'" << this->menu[i].foodName << "' ������ ��..." << endl;
				int x = 40, y = 20;
				gotoxy(x + 1, y - 1);
				puts("******");
				Sleep(1000);
				gotoxy(x - 1, y - 2);
				puts("~~~~~~~~~~");
				Sleep(1000);
				gotoxy(x - 1, y - 3);
				puts("##########");
				Sleep(1000);
				gotoxy(x, y - 4);
				puts("--------");
				Sleep(1000);
				gotoxy(x + 1, y - 5);
				puts("******");
				Sleep(1000);
			}
		}
	}
}

void Mc::delivery() {
	system("cls");
	drawMap();
	gotoxy(TX - 4, TY);
	cout << "'" << this->address << "'�� �Ƶ������� ���!" << endl;
	Store::delivery();
	gotoxy(TX - 4, TY);
	cout << "                                             ";
	gotoxy(TX - 4, TY);
	cout << "| ���ְ� �弼��! |" << endl;
	Sleep(3000);
}