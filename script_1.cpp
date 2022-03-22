#include "script.h"
//移动鼠标
void MoveTo(int X, int Y)
{
	SetCursorPos(X, Y);
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
void ait()
{
	copyClipboard("@达尔文进化岛");
	MoveTo(524, 568);
	left();
	ctrlV();
	MoveTo(508, 455);
	Sleep(7500);
	left();
}
//ctrl-v
void ctrlV()
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
	ait();
	MoveTo(524, 568);
	copyClipboard("传送0,0");
	Sleep(500);
	ctrlV();
	MoveTo(1064, 646);
	left();
}
//攻击怪物
void Attack()
{
	ait();
	MoveTo(524, 568);
	copyClipboard("右a攻击全部怪物a右a攻击全部怪物a上a攻击全部怪物a上a攻击全部怪物a右a攻击全部怪物a右a攻击全部怪物a上a攻击全部怪物a上a攻击全部怪物a右a攻击全部怪物a右a攻击全部怪物");
	Sleep(500);
	ctrlV();
	MoveTo(1064, 646);
	left();
}
void AttackBoss()
{
	ait();
	MoveTo(524, 568);
	copyClipboard("强化披风a强化武器a强化饰品a强化右手a强化戒指a升级饰品a升级披风a升级戒指a升级右手a升级披风a升级武器a攻击bossa猜数500a打开盲盒2000a升级饰品a购买技能a华山论剑a挂机a签到a榜上有名");
	Sleep(500);
	ctrlV();
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
void copyClipboard(const char text[])
{
	int contentSize = strlen(text) + 1;
	HGLOBAL hMemory;
	LPTSTR lpMemory;
	OpenClipboard(NULL);
	EmptyClipboard();
	hMemory = GlobalAlloc(GMEM_MOVEABLE, contentSize);
	lpMemory = (LPTSTR)GlobalLock(hMemory);
	memcpy_s(lpMemory, contentSize, text, contentSize);
	GlobalUnlock(hMemory);
	SetClipboardData(CF_TEXT, hMemory);
	CloseClipboard();
}