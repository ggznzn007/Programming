//8. ���ڿ��� �ϳ� �Է¹ް� ���ڿ��� �κ� ���ڿ��� ����ϼ���
//hello
//h
//he
//hel
//hell
//hello

#include <iostream>
#include <string>

using namespace std;

void main()
{
	char one[20];// ������ �迭 ����
	cout << "���ڿ� 1�� �Է����ּ���: ";
	cin.getline(one, 20);//enter���� ���ڿ� �б�
	for (int i = 0 ; i < strlen(one); i++)
	{//�Է¹޴� ���ڿ��� ���̱��� ũ�⸦ ���
		for (int j = 0; j <= i; j++)
		{//�Է¹޴� ���ڿ� �� ��Ҹ� ���ڿ� ���̳����� ������Ŵ
			cout << one[j];// ������Ű�鼭 �迭�� ���ڸ� ���
		}
		cout << endl;
	}
}