#include<stdio.h>
#include<string.h>
//strlen--���ַ�������
//int main()
//{
//	int len = strlen("abcdef");//��������\0�������6�����󳤶ȵ�
//	char arr[] = { 'a','b','c','d','e','f'};//��������������Ϊ��һ������������\0
//	int len2 = strlen(arr);
//	printf("%d\n", len);
//	printf("%d\n", len2);
//	return 0;
//}

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("haha");
//	}
//	else
//		printf("hehe");
//	return 0;//�����hehe����Ϊ��Ȼ3-6=-3������strlen����������޷������������޷�����������Ҳ��һ���޷�����
//
//}

//strcpy���÷� 
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);//��arr2����arr1�У�����\0,����Ľ����bit
//	return 0;
//}

//#include<assert.h>
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
// //����srcָ����ַ�����destָ��Ŀռ䣬����\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
// //����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//strcat--�ַ���׷��
//// ע��strcat�ǲ����Խ�������׷�ӵģ���Ϊ��һ���Ὣǰһ����\0Ĩ����������ѭ��
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//�Զ���strcat
//char* my_strcat(char* dest, char* src)
//{
//	char* ret = dest;
//assert(dest != NULL);
//assert(src != NULL);
//	//1.�ҵ�Ŀ���ַ�����\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.�ں������׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//strcmp - �ַ����Ƚ�
//strcmp�Ƚϵ��÷��ǣ�ǰһ���ַ���������ĸ�Ƿ���ں�һ���ַ���������ĸ���������
//��ô����һ������0�ģ����С�ڣ��ͻ᷵��һ��С��0����
//�������ĸ��ͬ����ô���������Ƚϣ�������ж���ͬ����ô�ͻ᷵��0
//int main()
//{
//	char* p1 = "qere";
//	char* p2 = "abc";
//	int ret = strcmp(p1, p2);
//	printf("%d", ret);
//	return 0;
//}

//�Զ���strcmp
//#include<assert.h>
//int my_strcmp(const char* dst,const char* str)
//{
//	assert(dst && str);//��˼��dst��str�����ǿ�ָ��
//	while (*dst == *str)
//	{
//		if (*dst == '\0')
//		{
//			return 0;
//		}
//		dst++;
//		str++;
//	}
//	if (*dst > *str)
//		return 1;
//	else
//		return -1;
//	
//
//}
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//strstr���÷� - �����ַ���
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "def";
//	const char* ret = strstr(p1, p2);
//	if (ret == NULL)
//		printf("�ַ���������\n");
//	else
//		printf("�ַ�������\n");
//	return 0;
//}

//�Զ���strstr
//#include<assert.h>
//const char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	const char* s1 = p1;
//	const char* s2 = p2;
//	const char* cur = p1;
//	if (*p2 == '\0')
//		return p1;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))//�ǵ�ʹ�õ�ʱ��Ҫ����*
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "def";
//	const char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("�ַ���������");
//	else
//		printf("�ַ�������");
//	return 0;
//}

//strtok���÷�--�������ŵ��ַ��������շ��Ÿ��ָ���
//#include<stdio.h>
//int main()
//{
//	char arr[] = "zpw@bitedu.tech";
//    const char* p = "@.";//strtok�ĵڶ�������p���Ǵ�ŵ�һ�������г��ֹ��ķ��ŵ�
//	                     //ָ��
//	char str[1024] = { 0 };
//	strcpy(str, p);//��Ϊstrtok��ı�ԭ�����ַ�������ԭ�����ŵ�λ�ñ��\0
//	               //����strtokʹ�õ�ʱ��һ�㶼����һ���ַ��������ԭ�����ַ���
//	               //�����и�
//	char* ret = NULL;
//	//ע�⣬strtok����ÿ�и�һ�ξͻὫ�������ĵ�һ�������滻��\0
//	//strtok��Ҫ�ٴ����е�ʱ��ֻҪ�ڵ�һ�������������ָ�룬�Ϳ����ҵ�\0����һ��
//	//λ�ã���������
//	for (ret = strtok(arr, p);ret != NULL;ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strerror--���󱨸溯����������Ϣ������,���ش���������Ӧ����Ϣ
//#include<errno.h>
//int main()
//{
//	//char* str = strerror(errno);
//	//errno��һ��ȫ�ֵĴ�����ı���
//	//��c���Կ⺯����ִ�еĹ����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//	//0 - No error
//	//1 - Operate not permitted
//	//2 - No such file or directory
//  // .......
//	FILE* pf = fopen("test.txt", "r");//���Ǵ��ļ���һ��ָ�r�Ƕ�ȡ����˼
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));//���û����Ӧ���ļ�����ôϵͳ�ͻᱨ��
//		//��strerror�ͻ�Ѵ�����ת���ɶ�Ӧ�Ĵ�����Ϣ��������
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}

//�ַ�ת������ - tolower,toupper
//tolower�ǰѶ�Ӧ�Ĵ�д��ĸת����Сд��toupper�ǰѶ�Ӧ��Сд��ĸת���ɴ�д��ĸ
//������������ʹ�õ�ʱ��Ҫ����ͷ�ļ�
//#include<ctype.h>
//int main()
//{
//	char arr[] = "I aM A stUdenT";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))//isupper��һ���жϺ������ж��Ƿ��Ǵ�д��ĸ
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s", arr);
//	return 0;
//}

//�ַ����ຯ�� - �����Ӧ�������ϱ��������ͷ�����
//iscntrl - �κο����ַ�
//isspace - �հ��ַ����ո񡮡�����ҳ'\f',����'\n'���س�'\r',�Ʊ��'\t'���ߴ�ֱ�Ʊ��'\v'
//isdigit - ʮ��������0~9
//isxdigit - ʮ���������֣��������е�ʮ�������֣�Сд��ĸa~f����д��ĸA~F
//islower - Сд��ĸ
//isupper - ��д��ĸ
//isalpha - ��ĸ
//isalnum - ��ĸ��������
//ispunct - �����ţ��κβ��������ֻ�����ĸ��ͼ���ַ����ɴ�ӡ��
//isgraph - �κ��ַ�ͼ��
//isprint - �κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ�














































































































































