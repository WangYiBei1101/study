#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int Different(int a)
{
	int count = 0;
	if(a<=1)
	{
		return a;
	}
	count= a % 2;
	a = a / 2;
	return count + Different(a);
}
int main()
{
	int i, j;
	printf("输入两个整数：");
	scanf("%d%d",&i,&j);
	int a = i^j;
	int t=Different(a);
	printf("%d\n",t);
	system("pause");
	return 0;
}