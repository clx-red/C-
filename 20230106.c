#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()//计算1!+2!+3!+...+n!
//{
//	int sum = 0;
//	int n = 0;
//	int a = 0;
//	scanf("%d", &n);
//	for ( a = 1; a <= n; a++)
//	{
//		int i = 1;
//		int num = 1;
//		for (int b = a; i <= b; i++)
//		{
//			num = num * i;
//		}	
//		sum = sum + num ;
//	}
//	printf("%d\n", sum);
//	//代码优化
//	int sum1 = 0;
//	int ret = 1;
//	for(a = 1; a <= n; a++)
//	{
//		ret = ret * a;
//		sum1 = sum1 + ret;
//	}
//	printf("%d\n", sum1);
//	return 0;
//}


//int main()//计算n的阶乘
//{
//	int a = 0;
//	int i = 0;
//	int sum = 1;
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//	{
//		sum = i * sum;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);//break,continue作用效果也是跳出循环和结束当前循环
//	return 0;
//}


//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, ++y)//2次循环
//	{
//		printf("Hello\n");
//	}
//	for (x = 0, y = 0;  y = 0; ++x, ++y)//0次循环判断句：";y = 0;" 为假
//	{
//		printf("Hello\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	//for (; ; )//for循环初始化exp1、判断exp2、调整exp3都可以省略，判断省略后默认全为真
//	//{
//	//	printf("Hello 2023");
//	//}
//	for (a = 0; a < 10; a++)
//	{
//		for (b = 0; b < 10; b++)  //for( ;b < 10; b++)--printf: 1-10
//		{
//			static int c = 0;
//			c = c++;
//			printf("%d\n",c);//1-100
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)//for(exp1; exp2; exp3)
//	{
//		if (5 == i)
//		{	
//			//break;//1234
//		   //continue;//1234678910
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch >'9')//只输出1-9数字(ascii码)
//			continue;
//		else
//			putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	char m[6] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", m);
//	while(getchar() != '\n');//循环读取缓存区的字符，直到缓存区为空，Enter字符为'\n'
//	{; }
//	printf("请确认y/n：");
//	char ret = getchar();//若缓存区不为空则将自动读取缓存区数据，跳过此等待操作
//	if (ret == 'y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//	return 0;
//}