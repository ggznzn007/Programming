#include<iostream>
using namespace std;

int Plusint() 
{
    int num;
    cout << "������ �Է��ϼ��� : ";
    cin >> num; //������ �Է¹ޱ�
    for (int i = 0; i < num; i++) // ���� ������ ���� ���ϱ�
        cout << "�����մϴ�.\n";// 
    return 0;
}

int main()
{
    Plusint();
}
