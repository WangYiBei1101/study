#ifndef _GAME_H_
#define _GAME_H_

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void meun();
void ShowBoard(char arr[3][3], int rol, int cow);
void PlayBoard(char arr1[3][3], int rol, int cow);
void ComputerBoard(char arr1[3][3], int rol, int cow);
int Win(char arr1[3][3], int rol, int cow);
int Full(char arr1[3][3], int rol, int cow);

#endif