#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	char arr1[3][3] = { {' ',' ',' '},{' ',' ',' '},{' ',' ',' '} };
	ShowBoard(arr1,3,3);
	do
	{
		int v, k = Win(arr1, 3, 3);
		PlayBoard(arr1, 3, 3);
		v = Full(arr1, 3, 3);
		if (v==0)
		{
			ComputerBoard(arr1, 3, 3);
		}
		if (k==1)
		{
			printf("��Ӯ��\n");
			break;
		}
		if (k==0)
		{
			printf("������\n");
			break;
		}
		if (v==1)
		{
			if (k==2)
			{
				printf("ƽ��\n");
				break;
			}
		}
	} while (1);
}
int main()
{
	int i;
	do
	{
		meun();
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			break;
		case 2:
			i = 0;
			break;
		default:
			printf("�������");
			break;
		}
	} while (i);
	system("pause");
	return 0;
}