/* 
<������ �����ε�>
; ������ == ��ȣ
  ��ȣ => �������� ����
; Ŭ��������
  �����ڰ� �����ȣ�� �������� ������ ���
  ������(����)�ϰ� ���ִ� ������ν�
  �����ڸ� �Լ��� �����ϰ� ���ش�
*/

#include "Position.h"

void main()
{
	Position pos(10, 100);
	Position pos1(20,200);
	Position pos2 = pos + pos1;
	pos2.showPosition();
}