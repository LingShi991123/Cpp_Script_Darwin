#include <windows.h>
#include <stdio.h>
//移动鼠标
void MoveTo(int A,int B)
{
	SetCursorPos(A, B);
	Sleep(200);
}
//左键
void left()
{
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	Sleep(200);
}
//按下和松开
void press(int Press)
{
	keybd_event(Press, 0, 0, 0);
	Sleep(20);
	keybd_event(Press, 0, KEYEVENTF_KEYUP, 0);
	Sleep(200);
}
//按下
void down(int Down)
{
	keybd_event(Down, 0, 0, 0);
	Sleep(100);
}
//松开
void up(int Up)
{
	keybd_event(Up, 0, KEYEVENTF_KEYUP, 0);
	Sleep(100);
}
//@达尔文
void hi()
{
	MoveTo(524, 568);
	left();
	down(VK_LSHIFT);
	Sleep(200);
	press(50);
	up(VK_LSHIFT);
	press(68);
	press(65);
	press(69);
	press(82);
	press(87);
	press(69);
	press(78);
	press(32);
	MoveTo(508, 455);
	Sleep(7500);
	left();
}
//ctrl-v
void CtrlV()
{
	down(VK_LCONTROL);
	Sleep(200);
	press(86);
	up(VK_LCONTROL);
	Sleep(200);
}
//传送
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
//攻击boss
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
//攻击怪物
void Attack()
{
	hi();
	MoveTo(524, 568);
	CtrlV();
	MoveTo(1064, 646);
	left();
}
//开始时设定
void Start()
{
	printf("3\n");
	Sleep(1000);
	printf("2\n");
	Sleep(1000);
	printf("1\n");
	Sleep(1000);
	printf("开始运行脚本！");
	MoveTo(1260, 100);
	left();
	Sleep(20);
	Teleport();
}
//主程序
int main()
{
	Start();
	while (1)
	{
		for (int i = 1; i <= 56; i++)
		{
			//攻击怪物
			for (int j = 1; j <= 6; j++)
			{
				Attack();
			}
			//攻击boss
			Boss();
			//重置
			if (i == 2)
			{
				//传送
				Teleport();
			}
		}
	}
	return 0;
}
