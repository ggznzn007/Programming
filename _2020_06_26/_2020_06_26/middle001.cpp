#include <iostream>

using namespace std;

void SwapTwo(int* a, int* b)
{// �����ͷ� a�� b �ּҿ� �ִ� ���� ����Ŵ
	int temp = *a;
	*a = *b;
	*b = temp;

}

void main()
{
	int a = 10, b = 20;	cout << endl;
	cout << '\t' << a << endl;
	cout << '\t' << b << endl;
	SwapTwo(&a, &b); cout << endl;
	cout << '\t' << a << endl;
	cout << '\t' << b << endl;
}