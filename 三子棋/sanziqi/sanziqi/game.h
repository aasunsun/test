#define ROW 3	//��
#define COL 3	//��


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//��������
void InitBoard(char board[ROW][COL], int row, int col);	
void DisplayBoard(char board[ROW][COL], int row, int col);
void playerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);


//����״̬
//���ʤ-'*'
//����ʤ-'#'
//ƽ��-'Q'
//����-'C'
char IsWin(char board[ROW][COL], int row, int col);