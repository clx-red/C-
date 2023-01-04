
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
/*//enum week  //enum为枚举关键字
//{
//	monday, tuesday,wednesday,thursday,friday,saturday,sunday
//}; */

//int add(int x, int y)//自定义函数
//{
//	int sum = x + y;
//	return sum;
//}
int main()
{
	/*int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);//调用自定义函数
	c = add(a, b);
	printf("%d", c);*/

	/*int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);
	c = a + b;
	printf("%d\n", c);
	*/

	/*int a = 2;
	printf("%d\n", a);//2
	a = 6;
	printf("%d\n", a);//6
	const int b = 2;//const使得b值恒定
	printf("%d\n", b);//2
	//b = 6;//error
	//printf("%d\n", b);*/

	//enum week tady = monday; //0
	//tady = sunday; //6,yes
	//monday = 1; //error,不可修改值
	//printf("%d\n", tady); //6
	//printf("%d\n", monday);//0
	//printf("%d\n", tuesday);//1
	//printf("%d\n", sizeof(monday));//4
	//printf("%d\n", sizeof(tuesday));//4

	/*int arr[10] = {1,2,3,4,5,6,7,8,9,10};//数组
	char a[6] = {'1', '2', '3', '4', '5','\0'};
	printf("%s\n", a);
	printf("%c\n", a[3]);
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i] );
		i++;
	}*/
	//char arr1[] = "abc";//数组--('a', 'b', 'c','\0'),'\0'字符串结束标志
	//char arr2[] = { 'a', 'b', 'c' ,0};//0或'\0'为字符串结束标志
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//printf("%zd\n", sizeof(arr1));//4
	//printf("%zd\n", sizeof(arr2));//4
	//printf("%zd\n", strlen(arr1));//strlen--string length字符串长度
	//printf("%zd\n", strlen(arr2));//%zd防止溢出，%d可能会发生溢出
	//printf("%zd\n", strlen("c:\text\32\text.c"));//13, 以下算一个字符：'\dd'(d为8进制)，'\xdddd'(d为16进制)
	//printf("%s\n", ("c:\text\32\text.c"));//需要加转义字符"\"
	//printf("%s\n", ("c:\\text\\32\\text.c"));

	//int a = 10;
	//printf("%o\n", a);//输出8进制无前缀
	//printf("%x\n", a);//输出16进制无前缀
	//printf("%#o\n", a);// 输出8进制有前缀
	//printf("%#a\n", a); //输出16进制有前缀

	//int line = 0;
	//while (line <= 1000)
	//{
	//	printf("%d\n", line);
	//	line++;
	//}
	//if (line >= 1000)
	//{
	//	printf("hello world\n");
	//}
	return 0;
}