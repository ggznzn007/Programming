//5. "yes"�� �Էµ� ������ �������� �ʴ� ���α׷��� �ۼ��ؼ���.
//�Է��� cin.getline() �Լ��� ����ϼ���
#include <iostream>
#include <string>

using namespace std;

void main()
{
	char no[100];//�������迭 �˳��ϰ� ����
	for (int i = 0; i < sizeof(no); i++)
	{// �迭���̸�ŭ �ݺ�
		cout << "�����ϰ� ������ yes�� �Է��ϼ���>> ";
		cin.getline(no, 100);//enterŰ ���ö����� ���ڿ� �б�
		if (strcmp(no, "yes") == 0)
			break;
	}// �Է¹��� ���ڿ��� ���Ͽ� ������ ����
}

