#include "Chinese.h"
Chinese::Chinese() {
	this->kindOf = "Chinese";
}
void Chinese::choiceMenu() {
	Store::choiceMenu();
	this->choiceDouble();
	gotoxy(TX - 20, TY + 19);
	cout << "                        ";
	gotoxy(TX - 20, TY + 19);
	cout << "�� �ݾ� : " << this->totalPrice;
}
void Chinese::choiceDouble() {
	string a;
	gotoxy(TX - 20, TY + 17);
	cout << "                                                            ";
	gotoxy(TX - 20, TY + 17);
	cout << "������� �Ͻðڽ��ϱ�? +2000 (y/n) : ";
	cin >> a;
	if (a == "y" || a == "Y")
	{
		this->totalPrice += 2000;
	}
}
