//4. Add, Sub, Mul, Div Ŭ������ ����ϴ�.
//�� Ŭ�������� ���������� 4���� ����� ������ �ֽ��ϴ�
//int a, b;
//void setValue(int x, int y);	// x�� a��, y�� b�� ����
//int calculate()					// ������ �����ϰ� ��� ����
//���α׷��� ���ѷ����� ���ϴ�
#include <iostream>

using namespace std;

class Add
{
private:
	int a, b;
public:
	void setAdd(int i, int j)
	{
		a = i;
		b = j;
	}
	int Cal()
	{
		return a + b;
	}
};

class Sub
{
private:
	int a, b;
public:
	void setSub(int i, int j)
	{
		a = i;
		b = j;
	}
	int Cal()
	{
		return a - b;
	}
};

class Mul
{
private:
	int a, b;
public:
	
	void setMul(int i, int j)
	{
		a = i;
		b = j;
	}
	int Cal()
	{
		return a * b;
	}
};

class Div
{
private:
	int a, b;
public:
	void setDiv(int i, int j)
	{
		a = i;
		b = j;
	}
	int Cal()
	{
		return a / b;
	}
};

int main()
{
	Add a;	Sub s; 	Mul m; 	Div d;
	int x, y;//�Է¹��� ����
	char c;//������ ���� �Է�
	while (true) {
		cout << "���ڿ� �����ڸ� �Է��ϼ���:";
		cin >> x >> y >> c;
		if (c == '+') {// �Է¹��� ���ڰ� +�� 
			a.setAdd(x, y);
			cout << a.Cal() << endl;// +�������
		}
		else if (c == '-') {// �Է¹��� ���ڰ� -�� 
			s.setSub(x, y);
			cout << s.Cal() << endl;// -�������
		}
		else if (c == '*') {// �Է¹��� ���ڰ� *��
			m.setMul(x, y);
			cout << m.Cal() << endl;// *�������
		}
		else if (c == '/') {// �Է¹��� ���ڰ� /��
			d.setDiv(x, y);
			cout << d.Cal() << endl;// /�������
		}
	}
}