#include "WrinklePizza.h"

WrinklePizza::WrinklePizza()
{
	/*int addPrice = totalPrice;*/
	this->storeName = "WrinklePizza";
	this->menu[0].foodName = "������������";
	this->menu[0].foodPrice = 18000;
	this->menu[1].foodName = "�̰��ָ�����";
	this->menu[1].foodPrice = 19000;
	this->menu[2].foodName = "�����ָ�����";
	this->menu[2].foodPrice = 20000;
	this->menu[3].foodName = "�ƺ��㸮����";
	this->menu[3].foodPrice = 20000;
}

void WrinklePizza::showWelcom() {
	cout << "�������! '" << storeName << "'�Դϴ�!";
}

void WrinklePizza::cooking() {
	for (int i = 0; i < sizeof(this->menu) / sizeof(this->menu[0]); i++) {
		if (this->menu[i].numOfFood != 0) {
			for (int j = 0; j < menu[i].numOfFood; j++) {
				system("cls");
				drawMap();
				gotoxy(TX - 7, TY);
				cout << "'" << this->menu[i].foodName << "' ���� ��..." << endl;
				int i1, j1, k, z, x1;
				int x = 34, y = 11;
				for (i1 = 1; i1 <= 9; i1++)
				{
					gotoxy(x, y);
					switch (i1)
					{
					case 1:
					case 9:
						x1 = 6; z = 4;
						Sleep(500);
						break;
					case 2:
					case 8:
						x1 = 8; z = 1;
						Sleep(500);
						break;
					case 3:
					case 7:
						x1 = 9; z = 1;
						Sleep(500);
						break;
					default:
						x1 = 10; z = 0;
						Sleep(500);
					}
					for (j1 = 1; j1 <= z; j1++)
					{
						cout << " ";
					}
					for (k = 1; k <= x1; k++)
					{
						if (i1 == 1 || i1 == 9)
							cout << "* ";
						else if (k == 1 || k == x1)
							cout << "* ";
						else
							cout << "  ";
					}
					++y;
				}
				gotoxy(35, 13);
				cout << "   o    +   o";
				gotoxy(35, 15);
				cout << "  +  o o     +";
				gotoxy(35, 17);
				cout << "   +  o    o +";
				Sleep(1000);
			}
		}
	}
}



void WrinklePizza::delivery()
{
	system("cls");
	drawMap();
	gotoxy(TX - 4, TY);
	cout << "'" << this->address << "'��  ���!" << endl;
	Store::delivery();
	gotoxy(TX - 4, TY);
	cout << "                                             ";
	gotoxy(TX - 4, TY);
	cout << "| ���ְ� �弼��! |" << endl;
	Sleep(3000);
}
