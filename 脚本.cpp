#include <windows.h>
#include <stdio.h>
//�ƶ����
void MoveTo(int A,int B)
{
	SetCursorPos(A, B);
	Sleep(200);
}
//���
void left()
{
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	Sleep(200);
}
//���º��ɿ�
void press(int Press)
{
	keybd_event(Press, 0, 0, 0);
	Sleep(20);
	keybd_event(Press, 0, KEYEVENTF_KEYUP, 0);
	Sleep(200);
}
//����
void down(int Down)
{
	keybd_event(Down, 0, 0, 0);
	Sleep(100);
}
//�ɿ�
void up(int Up)
{
	keybd_event(Up, 0, KEYEVENTF_KEYUP, 0);
	Sleep(100);
}
//�����
void daerwen()
{
	press(68);
	press(65);
	press(69);
	press(82);
	press(87);
	press(69);
	press(78);
}
//@
void hi()
{
	MoveTo(524, 568);
	left();
	down(VK_LSHIFT);
	Sleep(200);
	press(50);
	up(VK_LSHIFT);
	daerwen();
	press(32);
	MoveTo(508, 455);
	Sleep(7500);
	left();
}
//ctrl-v
void ctrlv()
{
	down(VK_LCONTROL);
	Sleep(200);
	press(86);
	up(VK_LCONTROL);
	Sleep(200);
}
//����
void Teleport()
{
	hi();
	MoveTo(524, 568);
	press(67);
	press(72);
	press(85);
	press(65);
	press(78);
	press(83);
	press(79);
	press(78);
	press(71);
	press(32);
	press(48);
	press(110);
	press(48);
	MoveTo(1064, 646);
	left();
}
//����boss
void Boss()
{
	hi();
	MoveTo(524, 568);
	press(71);
	press(79);
	press(78);
	press(71);
	press(74);
	press(73);
	press(32);
	press(66);
	press(79);
	press(83);
	press(83);
	press(13);
	MoveTo(1064, 646);
	left();
}
//��������
void Attack()
{
	hi();
	MoveTo(524, 568);
	ctrlv();
	MoveTo(1064, 646);
	left();
}
//��ʼʱ�趨
void Start()
{
	printf("3\n");
	Sleep(1000);
	printf("2\n");
	Sleep(1000);
	printf("1\n");
	Sleep(1000);
	printf("��ʼ���нű���");
	MoveTo(1260, 100);
	left();
	Sleep(20);
	Teleport();
}
//������
int main()
{
	Start();
	while (1)
	{
		for (int i = 1; i <= 56; i++)
		{
			//��������
			for (int j = 1; j <= 6; j++)
			{
				Attack();
			}
			//����boss
			Boss();
			//����
			if (i == 2)
			{
				//����
				Teleport();
			}
		}
	}
	return 0;
}