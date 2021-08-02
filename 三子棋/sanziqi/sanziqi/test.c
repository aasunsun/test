#define _CRT_SECURE_NO_WARNINGS 1
//测试三子棋游戏
#include "game.h"


//   |   |   
//---|---|--- 
//   |   |
//---|---|---
//   |   |			//棋盘


void game()	//游戏的整个算法实现
{
	char ret = 0;
	//数组-玩家走出的棋盘信息
	char board[ROW][COL] = {'a'};	//全部空格
	//初始化数组-初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	while (1)		//开始游戏
	{
		//玩家下棋
		playerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家胜\n");
	}
	else if (ret == '#')
	{
		printf("电脑胜\n");
	}
	else
	{
		printf("平局\n");
	}
}
void menu()	//菜单
{
	printf("*********************************\n");
	printf("*******1.play		0.exi********\n");
	printf("*********************************\n");
}
void test()
{
	int a = 0;
	srand((unsigned int)time(NULL));	//生成随机值
	do
	{
		menu();	//游戏菜单
		printf("请选择:");
		scanf("%d", &a);
		switch (a)
		{
		case 1:	//输入1
			printf("三子棋\n");
			game();	//进入游戏
			break;
		case 0:	//输入0
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (a);	//0为假跳出循环，非零为真
}
int main()
{
	test();
	return 0;
}