//2. �л� ����ü�� �ۼ��մϴ�
//����ü�� �̸�, ����, Ű, ������, ��ȣ �� �̷�����ֽ��ϴ�
//�л� 5���� ������ �Է¹ް�
//��� ����ϼ���
//�ݵ�� �Լ��� �ۼ��ϰ�, �Լ��� �Ű������� �����͸� ���� �����ؾ� �մϴ�
#include<iostream>

using namespace std;

struct Student
{
	char name[20];
	int age[10];
	float height[10];
	float weight[10];
	int number[10];
};

void inputStudent(Student& st)
{
	for (int i = 1; i <= 5; i++)
	{
		cout << "input your name : ";
		cin >> st.name;
		cout << "input your age : ";
		cin >> st.age[20];
		cout << "input your height : ";
		cin >> st.height[20];
		cout << "input your weight : ";
		cin >> st.weight[20];
		cout << "input your number : ";
		cin >> st.number[20];
	}


}

void showStudent(Student& st)
{
	for (int i = 1; i <= 5; i++)
	{
		cout << "name : " << st.name << endl;
		cout << "age : " << st.age << endl;
		cout << "height : " << st.height << endl;
		cout << "weight : " << st.weight << endl;
		cout << "number : " << st.number << endl;
	}
	
}

void main()
{
	Student st;
	inputStudent(st);
	cout << endl;
	showStudent(st);

}