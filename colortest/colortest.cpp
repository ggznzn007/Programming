#include <iostream>
#include <windows.h>

using namespace std;

//#define col GetStdHandle(STD_OUTPUT_HANDLE)
//#define BLACK SetConSoleTextAttribute(col, 0x0000)
//#define DARK_BLUE SetConSoleTextAttribute(col, 0x0001)//û��
//#define GREEN SetConSoleTextAttribute(col, 0x0002)//���
//#define BLUE_GREEN SetConSoleTextAttribute(col, 0x0003)//û���
//#define BLOOD SetConSoleTextAttribute(col, 0x0004)//�ǻ�
//#define WINE SetConSoleTextAttribute(col, 0x0005)//���λ�
//#define GOLD SetConSoleTextAttribute(col, 0x0006)//�ݻ�
//#define ORIGINAL SetConSoleTextAttribute(col, 0x0007)//���� ȸ��
//#define GRAY SetConSoleTextAttribute(col, 0x0008)//ȸ��
//#define BLUE SetConSoleTextAttribute(col, 0x0009)//�Ķ���
//#define HIGH_GREEN SetConSoleTextAttribute(col, 0x000a)//�������
//#define SKY_BLUE SetConSoleTextAttribute(col, 0x000b)//�ϴû�
//#define RED SetConSoleTextAttribute(col, 0x000c)//������
//#define PLUM SetConSoleTextAttribute(col, 0x000d)//���ֻ�
//#define YELLOW SetConSoleTextAttribute(col, 0x000e)//�����
//#define WHITE SetConSoleTextAttribute(col, 0x000f)//�Ͼ��

void setcolor(unsigned short text, unsigned short back)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text | (back << 4));
}

void main()
{
	/*cout << "Nomal Color";
	system("color f1");
	*/
	setcolor(0x000e,0);
}




