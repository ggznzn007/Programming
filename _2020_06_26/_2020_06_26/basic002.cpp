#include<iostream>

using namespace std;

void main()
{
	for (int i = 1; i <= 100; i++)
	{// �������� i�� 1 ���� 100���� ���� ����
		cout << i<<'\t';//i ��½� ������ �����ְ�
		if (i%10 == 0)// 10���� ���� �������� 0�̸� 10�� ���
			cout << endl;// �ٹٲ����� 10���� ���
	}
}