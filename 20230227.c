#define _CRT_SECURE_NO_WARNINGS
////a + aa + aaa + aaaa + ......
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int a = 0;
//	int sum = 0;
//	printf("输入操作数:\n");
//	scanf("%d", &a);
//	printf("输入相加次数:\n");
//	scanf("%d", &n);	
//	int b = a;
//	for (int i = 0; i < n; i++)
//	{
//		sum = sum + b;
//		b = b * 10 + a;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//菲波那奇数列
//#include<stdio.h>
//int main()
//{
//	int a, i;
//	int U1 = 1,U2=1;
//	scanf("%d", &a);
//	{
//		for (i = 1; i <= a-2; i++)
//		{
//			U1 = U1 + U2;
//			U2 = U1 - U2;
//		}
//		printf("NO.%d is %d", a, U1);
//	}
//	return 0;
//}