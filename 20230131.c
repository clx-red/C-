#define _CRT_SECURE_NO_WARNINGS
//写个函数每调用一次num加1
//#include<stdio.h>
//void Add(int* x)
//{
//	(*x)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//写一个函数实现整形有序数组二分查找
//#include<stdio.h>
//int binary_search(int array[], int search, int size)
//{
//	int left = 0;
//	int right = size ;
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		if (array[middle] < search)
//		{
//			left = middle + 1;
//		}
//		else if (array[middle] > search)
//		{
//			right = middle - 1;
//		}
//		else if (array[middle] = search)
//		{
//			return middle;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int s = 0;
//	scanf("%d", &s);
//	int se = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, s, se);
//	if (ret == -1)
//		printf("数组中没有您查询的整数！");
//	else
//		printf("你所查找的整数%d下标为%d", s, ret);
//	return 0;
//}

//函数判断某年是否为闰年
//#include<stdio.h>
//int is_leap_year(int x)//函数声明用'.h'头文件，函数定义用'.c'源文件
//	{
//		if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//int main()
//{
//	
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leap_year(year) == 1)
//	{
//		printf("%d年是闰年", year);
//	}
//	else
//	{
//		printf("%d年不是闰年",year);
//	}
//	return 0;
//}


//#include<stdio.h>//函数判断是否为素数
//int is_prime(int x)
//{
//	int i = 0;
//	for (i = x; i > 1; i--)
//	{
//		int judgment = 0;
//		judgment = x % i;
//		if ((judgment == 0) && (i != x))
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if(is_prime(a) == 1)
//	{
//		printf("%d是素数", a);
//	}
//	else
//	{
//		printf("%d不是素数", a);
//	}
//	return 0;
//}


//#include<stdio.h>
//int f(int* y)//实参，一直有内存地址与main函数中的地址相对应
//{
//	*y = 1;
//	return *y;
//}
//int F(int x)//形参，只在调用函数时有内存地址，单次复制地址
//{
//	x = 1;
//	return x;
//}
//int main()
//{
//	int b = 10;
//	int c = 0; 
//	int* h = &b;
//	printf("%d\n", h);
//	c = F(b);//传值调用函数
//	printf("%d\n", b);
//	c = F(b);
//	printf("%d\n", c);//单次有效，修改形参不会影响实参
//	c = f(h);//传址调用函数
//	printf("%d\n", b);
//	c = f(h);
//	printf("%d\n", c);//一直有效
//	return 0;
//}