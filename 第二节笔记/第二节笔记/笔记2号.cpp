#define _CRT_SECURE_NO_WARNINGS 1//(这里1的前面也要有空格）
//#include<stdio.h>
//int  main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum =%d\n", sum);
//	return 0;
//}
//字面常量：直接写出来的值。eg：3，2，200等等
//int  main()
//{
//	int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
//	return 0;
//}
//const:常属性，不会变化(在某一变量前加，可以使变量变成常变量）
//#define 定义的标识符常量
//枚举常量：
//枚举：一一列举
//枚举关键字：enum
//enum Sex
//{
//   MALE,
//   FEMALE,
//   SECRET
//
//};
//int  main()
//{
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0
//}
//字符串：由双引号引起的一串字符
//#include <stdio.h>
//#include <string.h>
//int  main()
//{
//	char arr1[] = "abc"; //这种是不需要\0或，0的
//	char arr2[] = { 'a','b','c',0};//,0是字符串的结束标志，当单独打印时如果没加
//	printf("%d\n", strlen(arr1));           //“，0”，会出现乱码
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//ASCII编码     A-65    a-97（ASCII码值，不需要背）
//strlen-计算字符串长度的
//转义字符：转变原来的意思
//\t:水平制表符 （往后串n个空格，具体不一定）  \?:防止？被解析成三字母词   
//如果想要打印\test\之类的字符时，应当使用\\test\\,即可打印
//\':printf("%c\n",''')是无法打印出'的，应当使用printf("%c\n",'\'')才能打印
//#include <stdio.h>
//#include <string.h>
//int  main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//\t是转义字符，是同一个字符，所以
//	                                          数的时候要当成一个数；\32也是一个转
//	                                          义字符，是32作为八进制代表的十进制数字
//	                                          作为ASCII值，对应的字符
//	return 0;
//}
//\x+数字说明16进制，\+数字说明8进制
//#include <stdio.h>
//#include <string.h>
//int  main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(0/1)>:");//(>:)是提示符，在后面输入自己的选择
//	scanf("%d", &input);
//	if (input == 0)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}
//循环语句1：while语句
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n", line);
//		line++;//(line++意为循环，和while同为循环）
//	}
//	if (line >= 20000)
//		printf("好offer\n");
//
//
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int  main()
//{
//	int year = 0;
//	printf("不认识欣欣\n");
//	while (year < 18)
//	{
//		printf("不开心不开心:%d\n",year);
//		year++;
//     }
//	if (year >= 18)
//		printf("认识欣欣\n");
//		printf("爱欣欣一辈子\n");
//    return 0;
//}
//自定义函数-自我设计函数规则
//数组：
//eg：int arr[10] = {1，2，3，4，5，6，7，8，9，10}；   定义一个存放10个整数数字的数组
//语法规定： 下标对应0  1  2  3  4  5  6  7  8  9（下标就可以访问元素）
//第n个元素对应下标就是n-1
//操作符：这堂课略讲
//5%2的意思是取余数
//位操作：（2进制操作）&：按位“与”  |：按位“或”    ^：按位“异或”


