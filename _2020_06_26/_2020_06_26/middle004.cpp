#include <iostream>

using namespace std;

void SwapThree(int& a, int& b, int& c)
{// ���۷����� �̿��Ͽ� a,b,c�� �ִ� ���� swap
	int temp = a;
	a = b;
	b = c;
	c = temp;

}

void main()
{
	int a = 10, b = 20, c = 30;	cout << endl;
	cout << '\t' << a << endl;
	cout << '\t' << b << endl;
	cout << '\t' << c << endl;
	SwapThree(a, b, c); cout << endl;
	cout << '\t' << a << endl;
	cout << '\t' << b << endl;
	cout << '\t' << c << endl;
	//a���� b��, b���� c��, c���� a���� ��µ�
}