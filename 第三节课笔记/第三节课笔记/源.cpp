#include<stdio.h>
#include<string.h>
//int  main()
//{
//	int line = 0;
//	printf("��������\n");
//	while (line < 100)
//	{
//		printf("д����:%d\n",line);
//		line++;
//	}
//	if (line >= 100)
//		printf("Ӯȡ�׸���\n");
//
//
//
//	return 0;
//}
//int  main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��?(0/1)>:",input);
//	scanf_s("%d", &input);
//	if (input == 0)
//		printf("������\n");
//	else
//		printf("�ؼ�����\n");
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
//�����ڿ�
//EOF���ļ�������־
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
//	printf("%d\n", sizeof(arr));//���������С����λ���ֽڣ�һ��6��Ԫ�أ�ÿ��Ԫ�ض���int
//								//���ͣ�����һ����6*4=24���ֽ�)
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//���������Ԫ�ظ���ֻ��Ҫ�����������С
//										 //���Ե���Ԫ�صĴ�С�Ϳ������Ԫ�ظ���
//	return 0;
//}
//int  main()
//{
//	int a = 0;
//	int n = ~a;//~�ǰ�λȡ����2����λ����eg��1010��λȡ����0101�����ǰ�ԭ��0���1��1���0
//	printf("%d\n", n);//n���з��ŵ����Σ���ӡ����ԭ��
//	return  0;//ԭ�룬���룬����
//}             //�������ڴ��д洢��ʱ�򣬴洢����2���ƵĲ���
////ԭ��ԭ���Ų��䣬����λ��λȡ���õ����룬�����һ�õ����루������ԭ������ͬ��
//���ģ���ֻ�Ǽ򵥽��ܣ���������ϸ��
//int  main()
//{
//	int a = 10;
//	int b = a++;//����++����ʹ��a��ֵ������a���������11
//	//int c = ++a;//ǰ��++������a�������ٸ�ֵ��c,���û��b����ô��ӡ��������a��c��Ϊ11
//	printf("a = %d b = %d\n",a,b);
//
//	return 0;
//}
//ͬ��a--��--a��a++��++aһ�����㷨
//��=������   ==����
//�߼���������&&-����  ||-����
//������У��ж�Ϊ��-��0�������ж�Ϊ��-0
//int  main()
//{
//	int a = 3;//aΪ�棨��0��
//	int b = 5;//bΪ�棨��0��
//	int c = a && b;//ȫ��Ϊ�棬һ�����
//	printf("c=%d\n", c);  
//	return 0;
//}
//�����||���߼�����ôͬ��Ϊ�٣�һ������
//int  main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//(1)?(2):(3)����ʽ�൱��if else�ĸ�ʽ��Ϊ��1���е�ʽ�����������
//	printf("max = % d\n", max);//��ִ�У�2����������������ִ�У�3��
//	return 0;
//}
//�����ؼ��֣� auto:�Զ����ֲ�����һ�㶼ʡ���ˣ� register:�Ĵ��������������˵��Ҫһ���
//���������Ĵ�����
//tyredef:���Ͷ��壬���԰�һ������������һ������
//static:����Ӧ�����ٵ����ݼ̳е���һ��ѭ���У����磺
//void test()
//{
//	int a = 1;//�������a�Ǿ�̬������ÿ����һ��ѭ�����ֻ���1�������������Ľ����22222
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
//	static int a = 1;//static����int a���´�ѭ����a���ٱ��1�����Ǳ�����һ�����еĽ��
 //	a++;              //���Խ����23456
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