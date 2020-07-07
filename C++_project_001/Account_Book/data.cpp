#include <iostream>
#include <string>

using namespace std;

struct Data
{
	int Date;// 날짜
	int Income, Outgo;// 수입, 지출
	string item;// 항목
	int sum;//	합계
};

int Date = 0;
int TotalIncome = 0;
int TotalOutgo = 0;
int Number = 0;

bool AddData()//데이터 추가할때 쓰는 함수타입 bool
{
	Data* DT = new Data;
	DT->Date = Number + 1;
}

//수입과 지출을 입력받는다.
//cout << "오늘의 항목,수입,지출을 입력하세요:" << ;
//cin >> DT->item;
//cin >> DT->Income;
//cin >> DT->Outgo;

