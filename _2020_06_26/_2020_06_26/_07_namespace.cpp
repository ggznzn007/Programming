#include"_07_struct_01.h"
#include"_07_struct_02.h"
#include"_07_namespace.h"
#include<iostream>
using namespace std;
using namespace A::Score;

void main()
{
	Student st = { "ȫ�浿",90,88,100 };
	cout << "�̸�: " << st.name << '\n';
	cout << "����: " << st.kor << '\n';
	cout << "����: " << st.math << '\n';
	cout << "����: " << st.eng << '\n';

	B::Personal::Student st1 = { "ȫ�浿", "������", 24, 174.5f, 76.5f };
	cout << "�̸�: " << st1.name << '\n';
	cout << "�ּ�: " << st1.address << '\n';
	cout << "����: " << st1.age << '\n';
	cout << "Ű: " << st1.height << '\n';
	cout << "������: " << st1.weight << '\n';

	cout << A::job;
	cout << "\n";
	cout << B::job;
}