//7. �̸�, �ּ�, ���̸� �Է¹޾� ����ϼ���.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	char name[30];
	char addr[100];
	int age;

	cout << "�̸��� �Է����ּ���: "<<endl;
	cin.getline(name, 30);//enter���� ���ڿ� �б�
	cout << "�ּҸ� �Է����ּ���: " << endl;
	cin.getline(addr, 100);//enter���� ���ڿ� �б�
	cout << "���̸� �Է����ּ���: " << endl;
	cin >> age;

	cout << name << ", " << addr << ", " << age << "��" << endl;
	return 0;
}