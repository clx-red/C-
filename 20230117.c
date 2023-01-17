#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{ 
//	char arr[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", &arr);
//		int strcmp();
//		if (strcmp(arr, "123456") == 0)//strcmp()用于判断字符串是否相等，如果相等则返回值为0。不能直接用==判断字符串是否相等。
//		{
//			printf("登录成功！");
//			break;
//		}
//		else
//		{
//			static int a = 3;
//			--a;
//			printf("密码错误!还有%d次机会\n", a);
//		}
//			
//	}
//	if (i == 3)
//		{
//            printf("已退出!\n");
//		}
//	return 0;
//}

//
//#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = { "Hello World!" };
//	char arr2[] = { "############" };
//	int se = sizeof(arr1) / sizeof(arr1[0]);
//	int left = 0;
//	int right = se - 2;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//#include<windows.h>为Sleep头文件，Sleep()--延迟放映1000单位为毫秒
//		left++;
//		right--;
//		if ((right - left >= 1))
//		{
//			system("cls");//#include<stdlib.h>为系统命令头文件，system()为系统命令，'cls'--清屏
//		}
//	}
//	return 0;
//}


//二分查找算法
//#include<stdio.h>
//int main()
//{
//	int k = 7;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int se = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//左下标
//	int right = se - 1;//右下标
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//顺序查找
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int i = 0;
//	int se = sizeof(arr) / sizeof(arr[0]);
//	printf("%zd% zd\n", sizeof(arr), sizeof(arr[0]));
//	for(i = 0; i < se; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到，下标为%d\n", i);
//			break;
//		}
//	}
//	if (i == se)
//			printf("找不到");
//	return 0;
//}