#pragma once
#include <iostream>
using namespace std;

//���� �����Լ� 1���̻� ������
//�߻�Ŭ����(Abstract class)
//�� Ŭ������ ��ü�� ���� �� ���� 
//����� ������ �Ѵ�

class Employee
{
private:
	string name;
	string companyNum;
public:
	void inputEmployee();
	void showEmployee();
	virtual void calcpay() = 0;// ���� ���� �Լ�
};

