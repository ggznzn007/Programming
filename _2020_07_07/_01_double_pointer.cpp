#include <iostream>

using namespace std;
/*
int * ptr����
int*�� �ڷ����̰� ptr�� �����̸�
ptr��  int������ int �迭�� �����ּҸ� ���� �� �ִ�
���ҷ� ����
�׷��� ptr�� &ptr�� ����ϸ� �ּҰ� ��µȴ�.
*/
void main()
{
	int num = 10;
	int* ptr = &num;

	cout << &num << endl;// num�� �ּҰ�
	cout << *ptr << endl;
	cout << sizeof(ptr) << endl;// �����͸� ����Ű�� ����
	cout << &ptr << endl;
}

