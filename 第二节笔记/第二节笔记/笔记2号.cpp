#define _CRT_SECURE_NO_WARNINGS 1//(����1��ǰ��ҲҪ�пո�
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
//���泣����ֱ��д������ֵ��eg��3��2��200�ȵ�
//int  main()
//{
//	int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
//	return 0;
//}
//const:�����ԣ�����仯(��ĳһ����ǰ�ӣ�����ʹ������ɳ�������
//#define ����ı�ʶ������
//ö�ٳ�����
//ö�٣�һһ�о�
//ö�ٹؼ��֣�enum
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
//�ַ�������˫���������һ���ַ�
//#include <stdio.h>
//#include <string.h>
//int  main()
//{
//	char arr1[] = "abc"; //�����ǲ���Ҫ\0��0��
//	char arr2[] = { 'a','b','c',0};//,0���ַ����Ľ�����־����������ӡʱ���û��
//	printf("%d\n", strlen(arr1));           //����0�������������
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//ASCII����     A-65    a-97��ASCII��ֵ������Ҫ����
//strlen-�����ַ������ȵ�
//ת���ַ���ת��ԭ������˼
//\t:ˮƽ�Ʊ�� ������n���ո񣬾��岻һ����  \?:��ֹ��������������ĸ��   
//�����Ҫ��ӡ\test\֮����ַ�ʱ��Ӧ��ʹ��\\test\\,���ɴ�ӡ
//\':printf("%c\n",''')���޷���ӡ��'�ģ�Ӧ��ʹ��printf("%c\n",'\'')���ܴ�ӡ
//#include <stdio.h>
//#include <string.h>
//int  main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//\t��ת���ַ�����ͬһ���ַ�������
//	                                          ����ʱ��Ҫ����һ������\32Ҳ��һ��ת
//	                                          ���ַ�����32��Ϊ�˽��ƴ����ʮ��������
//	                                          ��ΪASCIIֵ����Ӧ���ַ�
//	return 0;
//}
//\x+����˵��16���ƣ�\+����˵��8����
//#include <stdio.h>
//#include <string.h>
//int  main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(0/1)>:");//(>:)����ʾ�����ں��������Լ���ѡ��
//	scanf("%d", &input);
//	if (input == 0)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}
//ѭ�����1��while���
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 20000)
//	{
//		printf("��һ�д���:%d\n", line);
//		line++;//(line++��Ϊѭ������whileͬΪѭ����
//	}
//	if (line >= 20000)
//		printf("��offer\n");
//
//
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int  main()
//{
//	int year = 0;
//	printf("����ʶ����\n");
//	while (year < 18)
//	{
//		printf("�����Ĳ�����:%d\n",year);
//		year++;
//     }
//	if (year >= 18)
//		printf("��ʶ����\n");
//		printf("������һ����\n");
//    return 0;
//}
//�Զ��庯��-������ƺ�������
//���飺
//eg��int arr[10] = {1��2��3��4��5��6��7��8��9��10}��   ����һ�����10���������ֵ�����
//�﷨�涨�� �±��Ӧ0  1  2  3  4  5  6  7  8  9���±�Ϳ��Է���Ԫ�أ�
//��n��Ԫ�ض�Ӧ�±����n-1
//�����������ÿ��Խ�
//5%2����˼��ȡ����
//λ��������2���Ʋ�����&����λ���롱  |����λ����    ^����λ�����


