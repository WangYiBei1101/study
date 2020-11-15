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
			printf("你赢了\n");
			break;
		}
		if (k==0)
		{
			printf("你输了\n");
			break;
		}
		if (v==1)
		{
			if (k==2)
			{
				printf("平局\n");
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
			printf("输入错误");
			break;
		}
	} while (i);
	system("pause");
	return 0;
}