#include <iostream>
using namespace std;

//int main()
//{
//	int i;
//
//	if (cin >> i) {
//		cout << i << endl;
//	}
//	else {
//		cout << "����" << endl;
//	}
//}
int main()
{
	int i;

	cin >> i;
	if (cin.good()) {
		cout << i << endl;
	}
	else {
		cout << "����" << endl;
	}
}