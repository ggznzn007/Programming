#include <iostream>
#include <string>

using namespace std;

struct Data
{
	int Date;// ��¥
	int Income, Outgo;// ����, ����
	string item;// �׸�
	int sum;//	�հ�
};

int Date = 0;
int TotalIncome = 0;
int TotalOutgo = 0;
int Number = 0;

bool AddData()//������ �߰��Ҷ� ���� �Լ�Ÿ�� bool
{
	Data* DT = new Data;
	DT->Date = Number + 1;
}

//���԰� ������ �Է¹޴´�.
//cout << "������ �׸�,����,������ �Է��ϼ���:" << ;
//cin >> DT->item;
//cin >> DT->Income;
//cin >> DT->Outgo;

