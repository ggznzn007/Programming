//1. cout << �����ڸ� �̿��ؼ� �������� ����ϼ���
//2 x 1 = 2  3 x 1 = 3 ..... 9 x 1 = 9
//......
//2 x 9 = 18
#include <iostream>

using namespace std;

void main()
{	
	dec(cout);// 10���� ����
	for (int i = 2; i < 10; i++)
	{
		cout << endl;
		for (int j = 1; j < 10; j++) {
			cout << i << 'x' << j << '=' << i * j << endl;
		}
	}
}