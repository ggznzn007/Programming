#include <iostream>
#include "Store.h"
#include "BBQ.h"
#include "Mc.h"
#include "WrinklePizza.h"
#include "DoremiPizza.h"
#include "turboc.h"
using namespace std;

#define fir	gotoxy(10, 5)
//#define 
void drawMap() {
	for (int x = 10; x <= 80; x++) {
		for (int y = 2; y <= 26; y++) {
			if (x == 10 || x == 80 || y == 2 || y == 26) {
				gotoxy(x, y);
				puts("*");
			}
		}
	}
}
void showMain() {
	int startX = 32;
	gotoxy(startX + 5, 14);
	cout << "< 배달의 민족 >";
	gotoxy(startX, 22);
	cout << "시작하려면 아무키나 누르세요";

	while (!_kbhit()) {
		gotoxy(startX + 21, 4);
		puts("==");
		gotoxy(startX + 20, 5);
		puts("====");
		gotoxy(startX + 20, 6);
		puts("|집|");
		gotoxy(startX + 20, 7);
		puts("▤▤");
		for (int i = 0; i < 5; i++) {
			gotoxy(startX + 1, 6);
			puts("--|");
			gotoxy(startX, 7);
			puts("O  O");
			Sleep(1000);
			gotoxy(startX + 1, 6);
			puts("   ");
			gotoxy(startX, 7);
			puts("    ");
			startX += 3;
		}
		startX = 32;
	}
}
void heapDeleteAll(Store** st, int len) {
	for (int i = 0; i < len; i++) {
		delete st[i];
	}
}

void main() {
	while (true) {
		Store* st[] = {
			new BBQ(),
			new Mc(),
			new WrinklePizza(),
			new DoremiPizza()
		};
		system("cls");
		drawMap();
		gotoxy(TX, TY);
		cout << " < 가게 선택 >";
		gotoxy(TX - 4, TY + 2);
		cout << "--------------------";
		int i = 0;
		for (; i < sizeof(st) / sizeof(st[0]); i++) {
			gotoxy(TX - 2, TY + 4 + i * 2);
			cout << i + 1 << ". " << st[i]->showStoreName() << endl;
		}
		gotoxy(TX - 4, TY + 4 + i * 2);
		cout << "--------------------";
		gotoxy(TX - 2, TY + 4 + i * 2 + 2);
		cout << "번호 입력 : ";

		int storeNum = 0;
		cin >> storeNum;

		st[storeNum - 1]->choiceMenu();
		st[storeNum - 1]->checkAddress();
		st[storeNum - 1]->cooking();
		st[storeNum - 1]->delivery();


		heapDeleteAll(st, sizeof(st) / sizeof(st[0]));
	}
}