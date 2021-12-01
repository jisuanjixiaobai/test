#include<stdio.h>
#include<string.h>
//int  main()
//{
//	int line = 0;
//	printf("加入重邮\n");
//	while (line < 100)
//	{
//		printf("写代码:%d\n",line);
//		line++;
//	}
//	if (line >= 100)
//		printf("赢取白富美\n");
//
//
//
//	return 0;
//}
//int  main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗?(0/1)>:",input);
//	scanf_s("%d", &input);
//	if (input == 0)
//		printf("卖红薯\n");
//	else
//		printf("回家养猪\n");
//	return 0;
//}
//int  main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf_s("%d%d", &a, &b);
//	sum = a + b;
//	printf("%d\n", sum);
//	return 0;
//}
//第三节课
//EOF是文件结束标志
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int  main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}
//int  main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(arr));//计算数组大小，单位是字节（一共6个元素，每个元素都是int
//								//整型，所以一共有6*4=24个字节)
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//计算数组的元素个数只需要用整体数组大小
//										 //除以单个元素的大小就可以求出元素个数
//	return 0;
//}
//int  main()
//{
//	int a = 0;
//	int n = ~a;//~是按位取反（2进制位），eg：1010按位取反后0101，就是把原数0变成1，1变成0
//	printf("%d\n", n);//n是有符号的整形，打印的是原码
//	return  0;//原码，反码，补码
//}             //负数在内存中存储的时候，存储的是2进制的补码
////原码原符号不变，其他位按位取反得到反码，反码加一得到补码（正数的原反补相同）
//放心，这只是简单介绍，后来会详细讲
//int  main()
//{
//	int a = 10;
//	int b = a++;//后置++，先使用a的值，再让a再自增变成11
//	//int c = ++a;//前置++，先让a自增，再赋值给c,如果没有b，那么打印出来就是a和c都为11
//	printf("a = %d b = %d\n",a,b);
//
//	return 0;
//}
//同样a--和--a与a++和++a一样的算法
//！=不等于   ==等于
//逻辑操作符：&&-并且  ||-或者
//计算机中，判断为真-非0，，，判断为假-0
//int  main()
//{
//	int a = 3;//a为真（非0）
//	int b = 5;//b为真（非0）
//	int c = a && b;//全真为真，一假则假
//	printf("c=%d\n", c);  
//	return 0;
//}
//如果是||（逻辑或）那么同假为假，一真则真
//int  main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//(1)?(2):(3)的形式相当于if else的格式意为（1）中的式子如果成立，
//	printf("max = % d\n", max);//则执行（2），若不成立，则执行（3）
//	return 0;
//}
//常见关键字： auto:自动（局部变量一般都省略了） register:寄存器变量，相对来说重要一点的
//变量会放入寄存器中
//tyredef:类型定义，可以把一个类型重新起一个名字
//static:将本应该销毁的数据继承到下一个循环中，例如：
//void test()
//{
//	int a = 1;//这里面的a是静态变量，每结束一次循环就又会变成1，所以最后输出的结果是22222
//	a++;
//	printf("a=%d\n", a);
//}
//int  main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//			
//	}
//	return 0;
//}
//void test()
//{
//	static int a = 1;//static修饰int a后下次循环中a不再变回1，而是保留上一次运行的结果
 //	a++;              //所以结果是23456
//	printf("a=%d\n", a);
//}
//int  main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    printf("Enter a date(year month day):\n");
//    scanf("%d%d%d", a, b, c);
//    printf("You entered the date: %02d/%02d/%d", a, b, c);
//    return 0;
//}