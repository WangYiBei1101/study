#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void meun()
{
	printf("*****************************************************\n");
	printf("****************1、开始游戏*****2、退出**************\n");
	printf("*****************************************************\n");
}
void ShowBoard(char arr[ROL][COW], int rol, int cow)
{
	for (int i = 1; i < rol-1; i++)
	{
		for (int j = 1; j < cow-1; j++)
		{
			if (j == 1)
			{
				printf("|");
			}
			printf("---");
			printf("|");
		}
		printf("\n");
		for (int j = 1; j < cow-1; j++)
		{
			if (j == 1)
			{
				printf("|");
			}
			printf(" %c ",arr[i][j]);
			printf("|");
		}
		printf("\n");
	}
	for (int j = 1; j < cow - 1; j++)
	{
		if (j == 1)
		{
			printf("|");
		}
		printf("---");
		printf("|");
	}
	printf("\n");
}
void Mine(char arr1[ROL][COW], int rol, int cow)
{
	srand(time(NULL));
	int n = rand() % 49+1;
	int x = 1;
	do
	{
		int i = rand() % 9 + 1;
		int j = rand() % 9 + 1;
		if (arr1[i][j]!='*')
		{
			arr1[i][j] = '*';
			x=x+1;
		}
	} while (x<n);
}
int Player(char arr[ROL][COW], char arr1[ROL][COW], int rol, int cow)
{
	int i, j, v = 1;
	printf("请输入坐标：");
	do
	{
		scanf("%d%d", &i, &j);
		if (i<rol - 1 && i>0 && j<cow - 1 && j>0)
		{
			int count = 48;
			for (int n = i - 1; n <= i + 1; n++)
			{
				for (int m = j - 1; m < j + 1; m++)
				{
					if (arr1[i][j] == '*')
					{
						printf("输了\n");
						ShowBoard(arr1, ROL, COW);
						return 0;
					}
					else
					{
						if (arr1[m][n] == '*')
						{
							count++;
						}
					}
				}
			}
			arr[i][j] = count;
			v = 0;
		}
		else
		{
			printf("输入有误重新输入：");
		}
	} while (v);
}
int IsFull(char arr[ROL][COW], char arr1[ROL][COW], int rol, int cow)
{
	for (int i = 0; i < ROL; i++)
	{
		for (int j = 0; j < COW; j++)
		{
			if (arr[i][j]==' ')
				return 0;
		}
	}
	return 1;
}