#define  _CRT_SECURE_NO_WARNINGS
//三子棋
#include"game.h"
void menu()
{
	printf("********************************\n");
	printf("*******1.play     0.exit********\n");
	printf("********************************\n");
	
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = {0};//存放走出的棋盘信息
	InitBoard(board, ROW, COL);//初始化棋盘
	DisplayBoard(board,ROW,COL);//打印棋盘
	while (1)//下棋
	{
		PlayerMove(board,ROW,COL);//玩家下棋
		DisplayBoard(board, ROW, COL);
		ret=isWin(board,ROW,COL);//判断输赢
		if (ret != 'C')
		{
			if (ret == '*')
			{
				printf("玩家赢\n");
			}
			else if (ret == '#')
			{
				printf("电脑赢\n");
			}
			else if (ret == 'Q')
			{
				printf("平局\n");
			}
			break;
		}
		ComputerMove(board, ROW, COL);//电脑下棋
		DisplayBoard(board, ROW, COL);
		ret=isWin(board,ROW,COL);//判断输赢
		if (ret != 'C')
		{
			if (ret == '*')
			{
				printf("玩家赢\n");
			}
			else if (ret == '#')
			{
				printf("电脑赢\n");
			}
			else if (ret == 'Q')
			{
				printf("平局\n");
			}
			break;
		}
		
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			printf("三子棋\n\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择");
			break;
		}

	} while (input);
}
int main()

{
	test();
	return 0;
}