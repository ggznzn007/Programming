#include<iostream>

using namespace std;

void main()
{
    int num = 1;

    while (num < 11)
    {
        if (num % 2 == 0)// ������ 2�� ���� �������� 0�̸� 
        {
            cout<< num <<"\n";
        }
        num++;
    }
    cout <<"\n";

}