#include "Human.h"
#include "Developer.h"

void main()
{
	Human human;
	human.play();

	Developer dev;
	dev.play();

	/* �θ� ������ ���� = �ڽİ�ü
	1) play()�� virtual �Լ��� �ƴ� ���
		�����Ϸ��� hu�� �ڷ����� Human �ΰ��� ���� 
		������ �� Human::play()��� ���Ѵ�
		(���� ���ε�)
	2) play()�� virtual �Լ��� ���
		�����Ϸ��� �̸� �Լ��� �ּҸ� ���ε����� �ʴ´�.
		����ÿ� ��ü�� vptr�� ���� �������̺���
		play()�Լ��� �ּҸ� ã�Ƽ� �����Ѵ�
		(���� ���ε�)
	*/

	Human* hu = &dev;
	hu->play();		
}