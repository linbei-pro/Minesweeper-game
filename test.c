
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
	char mine[ROWS][COLS] = {0};//��Ų��õ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų�����׵���Ϣ
	//��ʼ�����������Ϊָ��������
	//mine ��û�в����׵�ʱ���ǡ�0�����ַ�0��
	Initboard(mine,ROWS,COLS,'0');
	//show ��û���Ų��׵�ʱ���ǡ�*��
	Initboard(show,ROWS,COLS,'*');

//������
	SetMine(mine,ROW,COL);

	//Displayboard(mine, ROW, COL);

	Displayboard(show,ROW,COL);

//�Ų���
	Findmine(mine,show,ROW,COL);
	
}

int main()
{
	int input = 0;
	//���������������
	srand((unsigned int)time(NULL));
	do
	{
		menu();//��ӡ�˵�
		printf("�� ѡ �� ( 1 ���� 0 ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("ɨ����Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);

	return 0;
}