#pragma once
#define INC_NUM 200

class AccountBook
{
protected:

public:
	virtual void input() = 0;//���� �Է��Լ� - ��¥ ���� ���� �ݾ� ���
	virtual void output() = 0;//�Էµ� ���� ����Լ�
	virtual void selMenu();//���� �����Լ�
	virtual int calc() = 0;//�Էµ� �ݾ� ����Լ�
};

