//3. ���ܾ �Է¹ް� ���ܾ �������� ����������.
//��, �ΰ��� �״�ο��� �մϴ�.
//�������� ��ȯ�� ���� ����ϼ���.

#include<iostream>

using namespace std;

int main()
{
	int a, b, i[10];
	cin >> b;
	for (a = 0; a < b; a++)
		cin >> i[a];
	for (a = b - 1; a >= 0; a--)
		cout << i[a];
	return 0;
}