//4. < Enter > Ű�� �Էµ� ������ ���ڵ��� �а�,
//�Էµ� ���� 'x'�� ������ ȭ�鿡 ����ϼ���.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	char str[30];//���ڿ� �Է��� �迭 ����
	int cnt = 0;// 'x'�� ������ ī������ ����
	cout << "���ڵ��� �Է����ּ���: ";
	cin.getline(str, 30);//getline �Լ��� enter�Է������� �б�
	for (int i = 0; i < sizeof(str); i++)
	{//���ڹ迭�� ���̸�ŭ �а�
		if (str[i] == 'x')//���ڿ��߿� x�� ������
			cnt++;// ���� ī�������ְ�
	}
	cout << "x�� ������ " << cnt << " �Դϴ�" << endl;
	return 0;
}