#define _CRT_SECURE_NO_WARNINGS	
//6. ';'���� 5���� �̸��� �����ؼ� �Է¹޾�, 
//�� �̸��� ����� ȭ�鿡 ����ϼ���.
//�׸��� ���� �� �̸��� �Ǻ��ؼ� ��Ÿ������.
//cin.getline(str, 100, ';');
//ȫ�浿; �Ӳ���; ����; ������; ��¥��Ʈ;
//1:ȫ�浿
//2 : �Ӳ���
//3 : ����
//4 : ������
//5 : ��¥��Ʈ
#include <iostream>
#include <string>

using namespace std;

void main()
{
	char name[100];
	char Longname[100];
	int longestN = 1;
	cout << "5���� �̸��� ';'���� �����Ͽ� �Է����ּ���"
		<< endl << ">>";
	for (int i = 1; i <= 5; i++)
	{
		cin.getline(name,100,';');//���ͳ��ö����� ���ڿ� �б�
		cout << i << ":" << name << endl;
		if (strlen(name) > longestN)
		{			
			longestN = strlen(name);
			strcpy(Longname, name);//���ڿ������� ����
		}
			//���ڿ��� ���̸� ��ȯ�ϴ� �Լ����
	}
	cout << "���� �� �̸��� " << Longname << "�Դϴ�" << endl;
}