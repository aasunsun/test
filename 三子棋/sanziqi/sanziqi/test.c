#define _CRT_SECURE_NO_WARNINGS 1
//������������Ϸ
#include "game.h"


//   |   |   
//---|---|--- 
//   |   |
//---|---|---
//   |   |			//����


void game()	//��Ϸ�������㷨ʵ��
{
	char ret = 0;
	//����-����߳���������Ϣ
	char board[ROW][COL] = {'a'};	//ȫ���ո�
	//��ʼ������-��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	while (1)		//��ʼ��Ϸ
	{
		//�������
		playerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���ʤ\n");
	}
	else if (ret == '#')
	{
		printf("����ʤ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void menu()	//�˵�
{
	printf("*********************************\n");
	printf("*******1.play		0.exi********\n");
	printf("*********************************\n");
}
void test()
{
	int a = 0;
	srand((unsigned int)time(NULL));	//�������ֵ
	do
	{
		menu();	//��Ϸ�˵�
		printf("��ѡ��:");
		scanf("%d", &a);
		switch (a)
		{
		case 1:	//����1
			printf("������\n");
			game();	//������Ϸ
			break;
		case 0:	//����0
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (a);	//0Ϊ������ѭ��������Ϊ��
}
int main()
{
	test();
	return 0;
}