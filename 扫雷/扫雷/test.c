#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	char arr[ROL][COW] = {0};
	char arr1[ROL][COW] = {0};
	for (int i = 0; i < ROL; i++)
	{
		for (int j = 0; j < COW; j++)
		{
			arr[i][j] = ' ';
		}
	}
	for (int i = 0; i < ROL; i++)
	{
		for (int j = 0; j < COW; j++)
		{
			arr1[i][j] = ' ';
		}
	}
	Mine(arr1, ROL, COW);
	int z = 1;
	do
	{
		ShowBoard(arr, ROL,COW);
		int c=Player(arr,arr1,ROL,COW);
		int y = IsFull(arr, arr1, ROL, COW);
		if (c == 0)
		{
			z = 0;
		}
		else if (y == 1)
		{
			printf("你赢了");
			ShowBoard(arr, ROL, COW);
			z = 0;
		}
		
	} while (z);
}
int main()
{
	int i;
	do
	{
		meun();
		scanf("%d",&i);
		switch (i)
		{
		case 1:
			game();
			break;
		case 2:
			i = 0;
			break;
		default:
			printf("输入错误，请重新输入：");
			break;
		}
	} while (i);
	system("pause");
	return 0;
}