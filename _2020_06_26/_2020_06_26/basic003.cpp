#include <iostream>

using namespace std;

int main()
{ 
	int n = 0;
	int sum = 0;
	cout << "�� ���� �Է��ϼ���>> ";
	cin >> n;//Ű���� �Է°�
	cout << endl;
	for (int k = 1; k <= n; k++) {
		sum += k; //Ű���� �Է°����� ������
	}
	cout << "1���� "<< n <<"������ ���� "<< sum <<" �Դϴ�."<<endl;
	// 1���� ��ºκ� Ű�����Է°������� ���� ������
	return 0;
}