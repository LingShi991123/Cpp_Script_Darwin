#include "script.h"
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
				AttackBoss();
			}
			//����
			if (i == 56)
			{
				//����
				Teleport();
			}
		}
	}
	return 0;
}