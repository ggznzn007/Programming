//4. ���̰� 5�� int�� �迭 arr�� �����ϰ� 
//1, 2, 3, 4, 5�� �ʱ�ȭ�Ѵ�.
//������ ��Ҹ� ����Ű�� ptr�� �����ϰ�
//ptr�� �����ϴ� �������� �迭�� ��Ҹ� ��� ���Ͽ� �����
//����Ѵ�.
#include<iostream>

using namespace std;

void main()
{
	
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[5];
	for (int i = 0; i > arr[i]; i--)
	{
		*(ptr - i);
		cout << *ptr;
	}
	

}
