//��ҵ����
#include<stdio.h>
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//6,12 - �Լ������˵�
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
//	gets_s(arr);//��ȡһ��
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

//ˮ�ɻ���0-1000
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

//��ӡ���εļ����ǽ�����ͼ�ηֿ������ֿ������׽��з���
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);
//	//��ӡ�ϰ벿��
//	for (i = 0;i < line;i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0;j < line - 1 - i;j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0;j < 2 * i + 1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0;i < line;i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0;j < i + 1;j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
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
//	struct S a, * p = &a;//����һ���ṹ��ָ�룬ԭ����struct S a,*()=?
//	a.a = 99;//�൱��a->a
//	printf("%d\n",a.a);//Ҳ������(*p).a,������p->a�� ע�⣺������д��*p.a,��Ϊp�Ⱥ�.a��ϣ��ٽ����þͻ���ִ���
//	return 0;
//}

//����ˮ����
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

//��һ�ֽⷨ
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
//		total = 2 * money - 1;//�����㷨����������⣺2����ƿ==1ƿ��ˮ��1ƿ��ˮ1��Ǯ������һ����ƿ����1��Ǯ�����ǲ���
//	                          //��ô�����������ʣ��1��ƿ�ӣ������ܸ���Ӧ��-1
//	printf("%d", total);
//	return 0;
//}

//��Ƴ��򣬽������������ǰ��ż���ź�
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
//	c = a + b;//Ҫ������������
//	printf("%d,%d", a + b, c);//300,44 - ��Ϊunsigned������char���Դ�ŵķ�Χ��0~255��a+bû�д�����������Ի������������
//	                          //��c����˽��������Ծ�Ҫ�ܷ�Χ����
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned int b = *(unsigned char*)&a;
//	//Ҫ���˴洢�µ�b��ֵ                    --bΪ0x00 -  ��Ϊ0x1234==00 00 12 34�������˾��� 00 00 12 34
//	                                       //��Ϊ��unsigned char������ÿ�η���һ���ֽ�Ҳ���Ƿ��ʵ�00�ϣ����Խ������0x00
//	return 0;
//}

//��ӡ�������
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
//	//��ӡ
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

//�߼���Ϸ
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

//��������
//��25ƥ��5���ܵ���û�м�ʱ����������ȷ����36ƥ���е�ǰ�������������ٱ������ٴΣ�--8��
//����ⲻ���ڿ�����룬�����ڿ����ѹ�µ������ߵ��߼�����

//��������
//��һ���㣬���ʲ����ȣ�����ÿһ��ȼ����ǡ����һ��Сʱ�����������㣬����ȷ��һ��15���ӵ�ʱ���

//��ٷ����߼�����
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






























































































































































































