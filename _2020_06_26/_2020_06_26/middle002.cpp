#include <iostream>

using namespace std;

void SwapTwo(int& a, int& b)
{// ���۷����� �̿��Ͽ� a,b�� �ִ� ���� swap
	int temp = a;
	a = b;
	b = temp;

}

void main()
{
	int a = 10, b = 20;	cout << endl;
	cout << '\t' << a << endl;
	cout << '\t' << b << endl;
	SwapTwo(a, b); cout << endl;
	cout << '\t' << a << endl;
	cout << '\t' << b << endl;
}