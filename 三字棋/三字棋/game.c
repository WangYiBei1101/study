#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void meun()
{
	printf("*****************************************************\n");
	printf("*********1、开始游戏***********2、退出***************\n");
	printf("*****************************************************\n");
}
int Full(char arr1[3][3], int rol, int cow)
{
	for (int i = 0; i < rol; i++)
	{
		for (int j = 0; j < cow; j++)
		{
			if (arr1[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
void ShowBoard(char arr[3][3], int rol, int cow)
{
	for (int i = 0; i < rol; i++)
	{
		int j;
		for (j = 0; j < cow; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < cow - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i< rol - 1)
		{
			j = 0;
			for (; j < cow; j++)
			{
				printf("---");
				if (j < cow - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}

}
void PlayBoard(char arr1[3][3], int rol, int cow)
{
	int i = 0;
	do
	{
		printf("请输入位置：");
		scanf("%d%d", &rol, &cow);
		if (rol<3 && cow<3)
		{
 			arr1[rol][cow] = 'X';
			i = 0;
		}
		else
		{
			printf("输入位置不合法\n");
			i = 1;
		}
	} while (i);
	ShowBoard(arr1, 3, 3);
}
void ComputerBoard(char arr1[3][3], int rol, int cow)
{
	srand(time(NULL));
	int i = 1;
	do
	{
		rol = rand() % 3;
		cow = rand() % 3;
		if (arr1[rol][cow] == ' ')
		{
			arr1[rol][cow] = 'O';
			i = 0;
		}
	} while (i);
	ShowBoard(arr1, 3, 3);
}
int Win(char arr1[3][3],int rol,int cow)
{
	for (int i = 0; i < rol; i++)
		{
			if ((arr1[i][0] == arr1[i][1] && arr1[i][1] == arr1[i][2] && arr1[i][2] == 'X') || (arr1[0][i] == arr1[1][i] && arr1[1][i] == arr1[2][i] && arr1[2][i] == 'X'))
			{
				return 1;
			}
			else if (arr1[0][0] == arr1[1][1] && arr1[1][1] == arr1[2][2] && arr1[2][2] == 'X' || arr1[0][2] == arr1[1][1] && arr1[1][1] == arr1[2][0] && arr1[2][0] == 'X')
			{
				return 1;
			}
			if ((arr1[i][0] == arr1[i][1] && arr1[i][1] == arr1[i][2] && arr1[i][2] == 'O') || (arr1[0][i] == arr1[1][i] && arr1[1][i] == arr1[2][i] && arr1[2][i] == 'O'))
			{
				return 0;
			}
			else if (arr1[0][0] == arr1[1][1] && arr1[1][1] == arr1[2][2] && arr1[2][2] == 'O' || arr1[0][2] == arr1[1][1] && arr1[1][1] == arr1[2][0] && arr1[2][0] == 'O')
			{
				return 0;
			}
		}
	return 2;
}