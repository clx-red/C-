#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>//想要电脑不关机，先好好学数学！
//#include<stdlib.h>
//int main()
//{
//cycle:
//	system("shutdown -s -t 60");
//	printf("你的电脑将在1分钟后关机，回答\"∫cosx dx =？+ C\"解除关机！（运算符号前后加空格）\n==>:");
//	int arr[20] = { 0 };
//	scanf("%s", &arr);
//	if (strcmp(arr, "sinx") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto cycle;
//	}
//	return 0;
//}


//#include<stdio.h>//猜数字游戏2.0
//#include<stdlib.h>
//#include<windows.h>
//void game()
//{
//	int ret = 0;
//	ret = rand()%100 + 1;
//	printf("已随机生成1-100之间一个整数，请猜出该整数>:");
//	int input = 0;
//	int i = 0;
//	for (i = 1;; i++)
//	{
//		scanf("%d", &input);
//		if (input > ret)
//		{
//			printf("你猜大了！请再次尝试>:");
//		}
//		else if (input < ret)
//		{
//			printf("你猜小了！请再次尝试>:");
//		}
//		else
//		{
//			printf("恭喜你经过%d次后猜到了正确数字%d\n", i, ret);
//			break;
//		}
//	}
//}
//void menu()
//{
//	printf("********************\n");
//	printf("*    请  选  择    *\n");
//	printf("*      1:play      *\n");
//	printf("*      0:exit      *\n");
//	printf("********************\n");
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int judgment = 0;
//	do {
//		menu();
//		scanf("%d", &judgment);
//		switch (judgment)
//		{
//		case(1):
//			system("cls");
//			printf("请稍等！");
//			Sleep(1000);
//			system("cls");
//			game();
//			break;
//		case(0):
//			system("cls");
//			printf("请稍等！");
//			Sleep(1000);
//			system("cls");
//			printf("成功退出游戏！");
//			break;
//		default:
//			system("cls");
//			printf("请稍等！");
//			Sleep(1000);
//			system("cls");
//		}
//	} while (judgment != 0);
//	return 0;
//}


//#include<stdio.h>//猜数字游戏1.0
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	int ret = 0;
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	int cycle = 0;
//	do
//	{
//		system("cls");
//		ret = rand() % 100 + 1;
//		for (int i = 1; ; i++)
//		{
//			printf("请输入你猜的数字：");
//			scanf("%d", &input);
//			if (input > ret)
//			{
//				printf("你猜大了!\n");
//			}
//			else if (input < ret)
//			{
//				printf("你猜小了!\n");
//			}
//			else if (input = ret)
//			{
//				printf("恭喜你经过%d次尝试后猜中正确数字%d!\n", i, ret);
//				break;
//			}
//		}
//		printf("是否再来一次请选择\"1/0\">:");
//		scanf("%d", &cycle);
//	} while (cycle == 1);
//	return 0;
//}
