//���ԵĲ���
//1-���ִ�������� 2-�Ը��롢�����ȷ�ʽ�Դ�����ж�λ 3-ȷ�����������ԭ�� 4-��������Ǹ�����Ľ���취
//5-�Գ���������Ը��������²���

//Debug�汾�������ԣ����԰汾������Release�汾�ǲ������� �������汾��

//F5-�������� -Ҫ��F9���ʹ��
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0;i < 100;i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0;i < 1000;i++)
//	{
//		printf("%d ", 10 - i);//F9�ϵ� - ����ֱ��ִ�е��ϵ�ͣ����
//	}                         //�ٰ�F5����ֱ��������һ�����е��ԣ���ʹ��F10��һ��һ��Ѱ������
//	return 0;
//}

//F10 - �����     F11 - ����䣨���Խ����ڲ�������ȥ�ģ����Կ���ϸ�ڣ�      
//#include<stdio.h>
//int Add(int a, int b)
//{
//	return a + b;      //F11�ǿ��Խ��������������е��Եģ�����F10������
//}                    //shift+F11�������������������
//int main()
//{
//	printf("hehe\n");
//	int a = 0;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}

//���ټ��ӣ�shift+F9
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//���д�����ڵ��ԵĴ���
//����Ĵ��룺1-������������ 2-bug���� 3-Ч�ʸ� 4-�ɶ��Ը� 5-��ά����ǿ 6-ע������ 7-�ĵ���ȫ
//������coding���ɣ�1-ʹ��assert 2-����ʹ��conest 3-�������õı����� 4-��ӱ�Ҫ��ע�� 5-������������

#include<stdio.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//�Ż�����
//#include<assert.h>
//char* my_strcpy(char* dest,const  char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//assert�Ƕ��ԣ���������е��������������������У��������������ô�ͻ��Զ�����ʹ��ʱҪʹ��
//	assert(src != NULL);//ͷ�ļ�
//    while (*dest++ = *src++)//����++����ʹ�ã���++//�����Ƶ���\0'��ʱ���жϵ�ʱ��Ϊ�٣����Բ��ٽ���ѭ��
//    {
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//strcpy
//	//�����ַ���
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1,arr2));
//	return 0;
//}

//int main()
//{
//	const int num = 0;//���������num�����ı䣬����һ��Ҫ��num�ĵ�ַ����p������������Ҫ����const����
//	const int* p = &num;//int* pǰ��ҲҪ����const���������ܱ����޷�ͨ��ָ��p���ı�num��������*p���ܱ��ı䣩
//	*p = 20;
//	printf("%d", num);
//	return 0;
//}

//int main()
//{
//	const int num = 0;
//	int* const p = &num;//�����int* �������const�����ε�ʱָ�����p����Ҳ����p���ܱ��ı�
//	int n = 20;
//	p = &n;
//	printf("%d", num);
//	return 0;
//}
#include<stdio.h>
#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);//��ָ֤�����Ч��
//	while (str!='\0')
//	{
//		str++;
//		count++;
//
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//��̵ĳ�������1-�﷨���󣨼���򵥣�˫������Ϳ�����������ص㣩 2-���Ӵ����ڱ������Ų����֣�һ���Ǳ�ʶ�������ڻ���
// ƴд����  4-���д��󣺴���ÿ���д���Ҳ������ֻ��ͨ�����Բ����ҵ�����












