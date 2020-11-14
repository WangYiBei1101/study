#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void init(char arr[],int len)
{
	int i = 0;
	for (; i < len; i++)
	{
		arr[i] = 0;
	}
}
void print(char arr[], int len)
{
	int i = 0;
	for (; i < len; i++)
	{
		printf("%d\n",arr[i]);
	}
}
void reverse(char arr[], int len)
{
	for (int i = 0; i < len/2; i++)
	{
		int tem = arr[i];
		arr[i] = arr[len-1-i];
		arr[len-1-i] = tem;
	}
}
int main()
{
	char arr[10] = {1,2,3,4,5,6,7,8,9,0};
	int len = sizeof(arr) / sizeof(arr[0]);
	reverse(arr,len);
	print(arr, len);
	system("pause");
	return 0;
}