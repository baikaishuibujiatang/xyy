#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//菜单显示
void menu()
{
	printf("*************************************\n");
	printf("**********    1.play    *************\n");
	printf("**********    0.exit    *************\n");
	printf("*************************************\n");
}
void game()
{
	char board[ROWS][COLS] = { 0 };
	int ret = '0';
	init_board(board, ROWS, COLS);//初始化棋盘
	display_board(board, ROWS, COLS);
	while (1)
	{
		player_move(board, ROWS, COLS);
		ret = check_win(board, ROWS, COLS);
		if (ret == '*' || ret == '#'|| ret == 'q')
		{
			display_board(board, ROWS, COLS);
			break;
		}
		compute_move(board, ROWS, COLS);
		ret = check_win(board, ROWS, COLS);

		if (ret == '*' || ret == '#' || ret == 'q')
		{
			display_board(board, ROWS, COLS);
			break;
		}
		display_board(board, ROWS, COLS);

		/*if (ret != ' ')
			break;*/
	//	display_board(board, ROWS, COLS);
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	if (ret == '#')
	{
		printf("电脑赢\n");
	}
	if (ret == 'q')
	{
		printf("平局\n");
	}
//	display_board(board, ROWS, COLS);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：<");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入有误，请重新输入！\n");
			break;
		}

	} while (input);
	return 0;
}
