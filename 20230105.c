#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int  main()
//{
//	printf("Please input y/n :");
//    char ch = getchar();
//	if (ch == 'y')
//	{
//		printf("%c\n", ch);
//		putchar(ch);
//	}
//	else
//		printf("smile");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		i++;
//		if (i % 2 == 0)
//			continue;//终止本次循环，回到while判断
//		printf("%d\n", i);//打印1-100的基数
//	}
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 8)
//			break;//跳出循环
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch(整形)，允许嵌套使用
//	{
//	case 1://case 整形常量表达式
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	default:
//		printf("请输入1-3整数\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;//进入后按顺序运行，遇到break跳出switch
//	case 2:
//		n++;
//	case 3:
//		switch (n)//嵌套
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("%d %d", m, n);//m == 5 ,n == 3
//	return 0;
//}


//int main()
//{
//	int a = 19;
//	int b = a % 2;
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 1;
//	scanf("%d", &a);
//	if (a % 2 == 0)//判断一个数的奇偶性
//		printf("%d是偶数\n", a);
//	else
//		printf("%d是基数\n", a);
//	while (b <= 100)//打印1-100之间的基数
//	{
//		if (b % 2 == 1)
//		{
//			printf("%d\n", b);
//		}
//		b++;
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;                                                                     //int a = 0;
//	int b = 2;                                                                     //int b = 2;
//	if (a == 1)                                                                    //if( a == 1)
//		if (b == 2)                                                                   //if( b == 2)
//			printf("//悬空else");                                                   //pritnf("//写法不同但效果一样");
//		else                                                                           //else
//			printf("//else与最近的未匹配的if匹配");              //printf("//与前面代码一样匹配if( b == 2)");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n%d", a, b);
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	printf("%d岁\n", age);
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age <= 28)
//	{
//		printf("青年\n");
//		printf("要努力\n");
//	}
//	else if (age > 28 && age <= 50)
//		printf("壮年\n");
//	else
//		printf("老年\n");
//	return 0;
//}