#include "script.h"
//�ƶ����
void MoveTo(int X, int Y)
{
	SetCursorPos(X, Y);
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
//@�����
void ait()
{
	copyClipboard("@����Ľ�����");
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
//����
void Teleport()
{
	ait();
	MoveTo(524, 568);
	copyClipboard("����0,0");
	Sleep(500);
	ctrlV();
	MoveTo(1064, 646);
	left();
}
//��������
void Attack()
{
	ait();
	MoveTo(524, 568);
	copyClipboard("��a����ȫ������a��a����ȫ������a��a����ȫ������a��a����ȫ������a��a����ȫ������a��a����ȫ������a��a����ȫ������a��a����ȫ������a��a����ȫ������a��a����ȫ������");
	Sleep(500);
	ctrlV();
	MoveTo(1064, 646);
	left();
}
void AttackBoss()
{
	ait();
	MoveTo(524, 568);
	copyClipboard("ǿ������aǿ������aǿ����Ʒaǿ������aǿ����ָa������Ʒa��������a������ָa��������a��������a��������a����bossa����500a��ä��2000a������Ʒa������a��ɽ�۽�a�һ�aǩ��a��������");
	Sleep(500);
	ctrlV();
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