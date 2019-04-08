#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//�˵���ʾ
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
	init_board(board, ROWS, COLS);//��ʼ������
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
		printf("���Ӯ\n");
	}
	if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	if (ret == 'q')
	{
		printf("ƽ��\n");
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
		printf("��ѡ��<");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("�����������������룡\n");
			break;
		}

	} while (input);
	return 0;
}
