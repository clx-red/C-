#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//&a--取地址
//	int* p = &a; //p为一个存放地址的变量--指针
//	printf("%p\n", p);
//	*p = 20;//* --解引用操作符，找到的地址并该a值为20
//	printf("%d\n", a);
//	printf("%zd\n", sizeof(p));
//	return 0;
//}


//#define ADD(A, B) (A + B)//define定义的宏与函数相似
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 5;
//	int num2 = 6;
//	int sum1 = 0;
//	int sum2 = 0;
//	sum1 = ADD(num1, num2);
//	sum2 = Add(num1, num2);
//	printf("%d\n%d\n", sum1, sum2);
//}


//void cycle()
//{
//	 static int a = 1;//static修饰局部变量时可以延长局部变量的生命周期
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 1;
//	while (i < 5)
//	{
//		cycle();
//		i++;
//	}
//	extern int extern_a;//static修饰全局变量时可以限制全局变量的作用域，静态全局变量只能在自己所在的源文件内使用
//	                                 //static修饰函数时改变了函数的链接属性，让外部链接变成内部链接
//	printf("%d\n", extern_a);
//	return 0;
//}


//exp1 ? exp2 : exp3 //如果exp1为真则执行exp2，如果exp1为假则执行exp3
//int main()
//{
//	int a = 4;
//	int b = 3;
//	int max = 0;
//	int min = 0;
//	int m = 5;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	min = (a > b ? b : a);
//	printf("%d\n", min);
//	m -= 3;
//	printf("%d\n", m);
//	return 0;
//}


//原码符号位不变，其余按位取反 = 反码，反码+1 = 补码
//数在内存中储存的是补码
//打印输出时使用的是原码
//11111111111111111111111111111111 //补码
//11111111111111111111111111111110 //反码 
//10000000000000000000000000000001 //原码 -1


//int main()
//{
//	int num = 1;
//	int i = 0;
//	while (i <= 10)
//	{
//		num = num << 1;
//		printf("%d\n", num);
//		i++;
//	}
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	char arr1[] = { '1','2',0 };
//	printf("%zd\n", sizeof(arr));
//	printf("%zd\n", strlen(arr1));
//	return 0;
//}


//int F(int a, int b)
//{
//	if ( a > b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 =0;
//	int max = 0;
//	scanf("%d%d", &num1, &num2);
//	max = F(num1, num2);
//	printf("%d\n", max);
//	return 0;
//}
