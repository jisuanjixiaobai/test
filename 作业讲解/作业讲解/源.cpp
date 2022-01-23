//作业讲解
#include<stdio.h>
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//6,12 - 自己做对了的
//	return 0;
//}

//#include<string.h>
//#include<stdlib.h>
//void reverse(char* str)
//{
//	char* left = str;
//	int len = strlen(str);
//	char* right = str+len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	
//}
//int main()
//{
//	
//	char arr[256] = { 0 };
//	//scanf("%s", arr);//abcdef
//	gets_s(arr);//读取一行
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int a = 0,n=0;
//	scanf("%d,%d", &a,&n);
//	int i, b = 0, sum = 0;
//	for (i = 0;i < n;i++)
//	{
//	    b =a*pow(10, i)+b;
//		sum = sum + b;
//	}
//	printf("%d", sum);
//	return 0;
//}

//水仙花数0-1000
//#include<math.h>
//int main()
//{
//	int i = 0;
//	
//	for (i=0;i<=1000;i++)
//	{
//		int sum = 0;
//		int a = i;
//		if (i >= 10)
//		{
//			for (;;)
//
//			{
//
//				sum = pow(a % 10, 3) + sum;
//				
//				if (a / 10 == 0)
//					break;
//				a /= 10;
//			}
//		}
//		else
//		{
//			sum = pow(i, 3);
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	
//	return 0;
//}

//打印菱形的技巧是将整个图形分开看，分开更容易进行分析
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);
//	//打印上半部分
//	for (i = 0;i < line;i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0;j < line - 1 - i;j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0;j < 2 * i + 1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0;i < line;i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0;j < i + 1;j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0;j < 2 * (line-i-1)-1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;//这是一个结构体指针，原型是struct S a,*()=?
//	a.a = 99;//相当于a->a
//	printf("%d\n",a.a);//也可以是(*p).a,或者是p->a。 注意：不可以写成*p.a,因为p先和.a结合，再解引用就会出现错误
//	return 0;
//}

//喝汽水问题
//int main()
//{
//	int a = 0;
//	int i = 20;
//	int sum = 0;
//	for (a = 0;;a++)
//	{
//		sum = sum + i;
//		i = i / 2;
//		if (i == 0)
//		{
//			sum += 1;
//			break;
//		}
//		
//	}
//    printf("%d", sum);
//    return 0;
//}

//另一种解法
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	if (money == 0)
//	{
//		total = 0;
//	}
//	else
//		total = 2 * money - 1;//这种算法可以这样理解：2个空瓶==1瓶汽水，1瓶汽水1块钱，所以一个空瓶就是1块钱，但是不管
//	                          //怎么换都会在最后剩下1个瓶子，所以总个数应该-1
//	printf("%d", total);
//	return 0;
//}

//设计程序，将数组的奇数放前，偶数放后
//void print(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//		
//	}
//	printf("\n");
//}
//void move(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (left < right && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while (left < right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	move(arr,sz);
//	print(arr,sz);
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;//要进行整型提升
//	printf("%d,%d", a + b, c);//300,44 - 因为unsigned，所以char可以存放的范围是0~255。a+b没有存放起来，所以会进行整型提升
//	                          //而c存放了进来，所以就要受范围限制
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned int b = *(unsigned char*)&a;
//	//要求大端存储下的b的值                    --b为0x00 -  因为0x1234==00 00 12 34，存入大端就是 00 00 12 34
//	                                       //因为是unsigned char，所以每次访问一个字节也就是访问到00上，所以结果就是0x00
//	return 0;
//}

//打印杨辉三角
//int main()
//{
//	int i, j;
//	int arr[10][10] = { 0 };
//	for (i = 0;i < 10;i++)
//	{
//		for (j = 0;j < 10;j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (j == i)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	//打印
//	for (i = 0;i < 10;i++)
//	{
//		for (j = 0;j < 10 - 1 - i;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j <= i;j++)
//		{
//			
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//逻辑游戏
//int main()
//{
//	int killer = 0;
//	for (killer = 'a';killer <= 'd';killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer is %c\n", killer);
//		}
//	}
//	return 0;
//}

//赛马问题
//有25匹马，5个跑道，没有计时器，请赛马确定，36匹马中的前三名，请问至少比赛多少次？--8次
//这道题不是在考察代码，而是在考验高压下的面试者的逻辑能力

//烧香问题
//有一种香，材质不均匀，但是每一根燃烧完恰好是一个小时。给你两根香，帮我确定一个15分钟的时间段

//穷举法解逻辑问题
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1;a <= 5;a++)
//	{
//		for (b = 1;b <= 5;b++)
//		{
//			for (c = 1;c <= 5;c++)
//			{
//				for (d = 1;d <= 5;d++)
//				{
//					for (e = 1;e <= 5;e++)
//					{
//						if (((b == 2) + (a == 3) == 1) && ((b == 2) + (e == 4) == 1) && ((c == 1) + (d == 2) == 1) && ((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d",a,b,c,d,e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}






























































































































































































