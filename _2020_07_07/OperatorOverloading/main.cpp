/*
������ �����ε�
������ == ��ȣ
��ȣ => �������� ����
Ŭ��������
�����ڰ� �����ȣ�� ������ ���
������(����)�ϰ� ���ִ� �������
�����ڸ� �Լ��� �����ϰ� ���ش�
*/

#include "Position.h"
#include <iostream>
using namespace std;

void main()
{
	Position pos(10, 10);
	/*
	++pos;�� �����Ϸ��� ���ؼ� 
	pos.operator++();�� ����
	�Լ� ȣ��� �����

	�ᱹ ��ü�� ������ ȣ�� �Լ�
	*/
	pos.operator++();
	pos.showPosition();
	++++pos;// ++(++pos);
	pos.showPosition();
}