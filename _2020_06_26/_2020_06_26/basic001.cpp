#include<iostream>

using namespace std;

void main()
{
	int i = 1;
	int sum = 0; 
	while (i <= 100) // ����i�� 1���� 100����
	{
		sum = sum + i; // sum������ i���� ����
		i = i + 1;
	}
	cout << sum << endl;// while�ݺ����� ���� ���
}