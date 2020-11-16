#ifndef _GAME_H_
#define _GAME_H_
#define ROL 12
#define COW 12
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void ShowBoard(char arr[ROL][COW], int rol, int cow);
void meun();
void Mine(char arr[ROL][COW], int rol, int cow);
int Player(char arr[ROL][COW], char arr1[ROL][COW], int rol, int cow);
int IsFull(char arr[ROL][COW], char arr1[ROL][COW], int rol, int cow);
#endif