#include "Position.h"

void main()
{
	Position pos(10, 100);
	//5.operator+(pos);   //�Ұ���
	Position pos1 = 5 + pos;
	pos1.showPosition();
}