#include "StarUnit.h"
#include "Scv.h"
#include "Marine.h"
#include "Hydra.h"
#include "FireSoldier.h"
#include <Windows.h>
#include <time.h>
#include <stdlib.h>

//�������� �������� ǥ��
//1) ���ȿ����� �����ϴ� �ڽ�
//2) �������� �ڽŸ��� ������ ����
//3. �������� ����

//1) ������ �迭�� ��� �Ļ� Ŭ������ �ϰ� ���� �� ����
//2) �θ� ������ ������ ���� �ڽ� ��ü�� �����ص� 
//	 virtual�Լ��� �ڽ� ��ü ������ ������ �ϰ� �ȴ�
//3) ���ο� ������ �ʿ��� �� �θ� ��Ӹ� �޾Ƶ�
//	 ���� �ڵ忡 ��������
//	 -�θ� ������ �迭 : ��� ����
//	 -�θ� ������ �Ű����� : �ڽİ�ü: ������ ���
//	 -�θ�Ŭ���� ��� �� virtual�Լ� �߰����ָ�
//    ���� �ڵ带 �������� ��밡��
#include <iostream>

using namespace std;

int randomSleep()
{
	int delay = rand() % 2000 + 500;// 500~ 2499����
	Sleep(delay);
	return delay;
}



void hitAndRun(StarUnit* pUnit)
{
	pUnit->attack();
	int delay = randomSleep();
	if (delay < 1500)	
		pUnit->die();
	else				
		pUnit->move();
	
}

void main()
{
	srand((unsigned int)time(NULL));// ���� �ʱ�ȭ
	//1. ������ �ڽİ���
	//�ڽİ�ü���� �θ� ������ ����
	//�迭�� �ϰ� ������ �� �ִ�
	StarUnit* unit[] = { new Scv(), 
						 new Marine(),
						 new Hydra(), 
						 new FireSoldier() };
	//2. ������ �ڽ� ������ Ư¡ ����
	// �ڽ��� �������� �Լ��� virtual�� 
	// �����ϸ� �θ� ������ ������ �Ѱܵ�
	// �� ��ü ������ ������ ����ȴ�
	hitAndRun(unit[3]);

	delete unit[0];
	delete unit[1];
	delete unit[2];
	delete unit[3];
};
