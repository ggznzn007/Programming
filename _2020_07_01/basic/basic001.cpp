//1. main()�� ���� ����� ������ ������ TowerŬ������ �ۼ��ϼ���
//
//���̴� 1����
//���̴� 100����

#include <iostream>

using namespace std;

class Tower
{
private:
	int height;
public:
	Tower()//������
	{
		height = 1;
	}
	Tower(int h)//�Լ������ε�
	{
		height = h;
	}
	int getheight() 
	{
		return height;
	}
};

void main()
{
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}