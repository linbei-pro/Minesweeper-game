
#include"game.h"

void menu()
{
	printf("*******************************\n");
	printf("*******************************\n");
	printf("*****  1. play  0. exit  ******\n");
	printf("*******************************\n");
	printf("*******************************\n");
}

void game()
{
	char mine[ROWS][COLS] = {0};//存放布置的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息
	//初始化数组的内容为指定的内容
	//mine 在没有布置雷的时候都是‘0’（字符0）
	Initboard(mine,ROWS,COLS,'0');
	//show 在没有排查雷的时候都是‘*’
	Initboard(show,ROWS,COLS,'*');

//设置雷
	SetMine(mine,ROW,COL);

	//Displayboard(mine, ROW, COL);

	Displayboard(show,ROW,COL);

//排查雷
	Findmine(mine,show,ROW,COL);
	
}

int main()
{
	int input = 0;
	//设置随机数的生成
	srand((unsigned int)time(NULL));
	do
	{
		menu();//打印菜单
		printf("请 选 择 ( 1 或者 0 ）:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("扫雷游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);

	return 0;
}