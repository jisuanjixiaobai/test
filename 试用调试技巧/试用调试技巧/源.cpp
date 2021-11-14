//调试的步骤
//1-发现错误的所在 2-以隔离、消除等方式对错误进行定位 3-确定错误产生的原因 4-提出纠正那个错误的解决办法
//5-对程序错误予以改正，重新测试

//Debug版本包含调试（调试版本），而Release版本是不包含的 （发布版本）

//F5-启动调试 -要和F9配合使用
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
//		printf("%d ", 10 - i);//F9断点 - 代码直接执行到断点停下来
//	}                         //再按F5可以直接跳到这一步进行调试，再使用F10，一步一步寻找问题
//	return 0;
//}

//F10 - 逐过程     F11 - 逐语句（可以进到内部函数中去的，可以看到细节）      
//#include<stdio.h>
//int Add(int a, int b)
//{
//	return a + b;      //F11是可以进到这里面来进行调试的，但是F10不可以
//}                    //shift+F11可以跳出这个函数调用
//int main()
//{
//	printf("hehe\n");
//	int a = 0;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}

//快速监视：shift+F9
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

//如何写出易于调试的代码
//优秀的代码：1-代码运行正常 2-bug很少 3-效率高 4-可读性高 5-可维护性强 6-注释清晰 7-文档齐全
//常见的coding技巧：1-使用assert 2-尽量使用conest 3-养成良好的编码风格 4-添加必要的注释 5-避免编码的陷阱

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
//优化过后
//#include<assert.h>
//char* my_strcpy(char* dest,const  char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//assert是断言，如果（）中的条件成立，则正常运行，如果不成立，那么就会自动报错，使用时要使用
//	assert(src != NULL);//头文件
//    while (*dest++ = *src++)//后置++：先使用，后++//当复制到’\0'的时候，判断的时候为假，所以不再进行循环
//    {
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//strcpy
//	//拷贝字符串
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1,arr2));
//	return 0;
//}

//int main()
//{
//	const int num = 0;//如果我想让num不被改变，并且一定要把num的地址给到p，除了这里需要加上const以外
//	const int* p = &num;//int* p前面也要加上const，这样才能保障无法通过指针p来改变num（这种是*p不能被改变）
//	*p = 20;
//	printf("%d", num);
//	return 0;
//}

//int main()
//{
//	const int num = 0;
//	int* const p = &num;//如果在int* 后面加上const，修饰的时指针变量p本身，也就是p不能被改变
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
//	assert(str != NULL);//保证指针的有效性
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

//编程的常见错误：1-语法错误（极其简单，双击错误就可以来到错误地点） 2-链接错误（在报错中排查名字）一般是标识名不存在或者
// 拼写错误  4-运行错误：代码每次有错误，也不报错，只有通过调试才能找到错误












