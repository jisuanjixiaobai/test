#include<stdio.h>
#include<string.h>
//strlen--求字符串长度
//int main()
//{
//	int len = strlen("abcdef");//就是在找\0，结果是6，是求长度的
//	char arr[] = { 'a','b','c','d','e','f'};//结果是随机数，因为不一定到哪里会出现\0
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
//	return 0;//结果是hehe，因为虽然3-6=-3，但是strlen算出的数是无符号数，两个无符号数相减结果也是一个无符号数
//
//}

//strcpy的用法 
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);//把arr2带到arr1中，包括\0,打出的结果是bit
//	return 0;
//}

//#include<assert.h>
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
// //拷贝src指向的字符串到dest指向的空间，包含\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
// //返回目的空间的起始地址
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

//strcat--字符串追加
//// 注意strcat是不可以进行自身追加的，因为后一个会将前一个的\0抹掉，导致死循环
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//自定义strcat
//char* my_strcat(char* dest, char* src)
//{
//	char* ret = dest;
//assert(dest != NULL);
//assert(src != NULL);
//	//1.找到目的字符串的\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.在后面进行追加
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

//strcmp - 字符串比较
//strcmp比较的用法是，前一个字符串的首字母是否大于后一个字符串的首字母，如果大于
//那么返回一个大于0的，如果小于，就会返回一个小于0的数
//如果首字母相同，那么会继续往后比较，如果所有都相同，那么就会返回0
//int main()
//{
//	char* p1 = "qere";
//	char* p2 = "abc";
//	int ret = strcmp(p1, p2);
//	printf("%d", ret);
//	return 0;
//}

//自定义strcmp
//#include<assert.h>
//int my_strcmp(const char* dst,const char* str)
//{
//	assert(dst && str);//意思是dst和str都不是空指针
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

//strstr的用法 - 查找字符串
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "def";
//	const char* ret = strstr(p1, p2);
//	if (ret == NULL)
//		printf("字符串不存在\n");
//	else
//		printf("字符串存在\n");
//	return 0;
//}

//自定义strstr
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
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))//记得使用的时候都要打上*
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
//		printf("字符串不存在");
//	else
//		printf("字符串存在");
//	return 0;
//}

//strtok的用法--将带符号的字符串，按照符号给分隔开
//#include<stdio.h>
//int main()
//{
//	char arr[] = "zpw@bitedu.tech";
//    const char* p = "@.";//strtok的第二个参数p，是存放第一个参数中出现过的符号的
//	                     //指针
//	char str[1024] = { 0 };
//	strcpy(str, p);//因为strtok会改变原来的字符串，将原来符号的位置变成\0
//	               //所以strtok使用的时候一般都用另一个字符串来替代原来的字符串
//	               //进行切割
//	char* ret = NULL;
//	//注意，strtok函数每切割一次就会将他碰到的第一个符号替换成\0
//	//strtok想要再次运行的时候，只要在第一个参数中输入空指针，就可以找到\0的下一个
//	//位置，进行运行
//	for (ret = strtok(arr, p);ret != NULL;ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strerror--错误报告函数（错误信息函数）,返回错误码所对应的信息
//#include<errno.h>
//int main()
//{
//	//char* str = strerror(errno);
//	//errno是一个全局的错误码的变量
//	//当c语言库函数在执行的过程中，发生了错误，就会把对应的错误码，赋值到errno中
//	//0 - No error
//	//1 - Operate not permitted
//	//2 - No such file or directory
//  // .......
//	FILE* pf = fopen("test.txt", "r");//这是打开文件的一种指令，r是读取的意思
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));//如果没有相应的文件，那么系统就会报错
//		//而strerror就会把错误码转化成对应的错误信息，爆出来
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}

//字符转化函数 - tolower,toupper
//tolower是把对应的大写字母转化成小写，toupper是把对应的小写字母转化成大写字母
//这两个函数在使用的时候，要引用头文件
//#include<ctype.h>
//int main()
//{
//	char arr[] = "I aM A stUdenT";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))//isupper是一个判断函数，判断是否是大写字母
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s", arr);
//	return 0;
//}

//字符分类函数 - 如果相应函数符合本身条件就返回真
//iscntrl - 任何控制字符
//isspace - 空白字符：空格‘’，换页'\f',换行'\n'，回车'\r',制表符'\t'或者垂直制表符'\v'
//isdigit - 十进制数字0~9
//isxdigit - 十六进制数字，包括所有的十进制数字，小写字母a~f，大写字母A~F
//islower - 小写字母
//isupper - 大写字母
//isalpha - 字母
//isalnum - 字母或者数字
//ispunct - 标点符号，任何不属于数字或者字母的图形字符（可打印）
//isgraph - 任何字符图形
//isprint - 任何可打印字符，包括图形字符和空白字符














































































































































