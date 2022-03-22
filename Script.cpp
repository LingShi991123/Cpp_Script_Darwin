#include "script.h"
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
				AttackBoss();
			}
			//重置
			if (i == 56)
			{
				//传送
				Teleport();
			}
		}
	}
	return 0;
}