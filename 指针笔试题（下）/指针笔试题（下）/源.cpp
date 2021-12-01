//指针笔试题
#include<stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16  数组名-计算的是数组的总大小-单位是字节-4*4=16
//	printf("%d\n", sizeof(a + 0));//4 - 数组名这里表示首元素的值，a+0还是首元素地址，地址的大小都是4个字节 
//	printf("%d\n", sizeof(*a));//4 - 数组名表示首元素地址，*a就是首元素，所以sizeof（*a）是4
//	printf("%d\n", sizeof(a + 1));//4 - 数组名表示这里首元素地址，a+1是第二个元素的地址，地址的大小就是4个字节
//	printf("%d\n", sizeof(a[1]));//4 - 第二个元素的大小 
//	printf("%d\n", sizeof(&a));//4 - &a取出的是数组的地址，但是数组的地址那也是地址，地址的大小就是4个字节
//	printf("%d\n", sizeof(*&a));//16 - &a是数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小，单位是字节
//	printf("%d\n", sizeof(&a + 1));//4 - &a数组的地址，&a+1虽然地址跳过整个数组，但是还是一个地址，所以是4个字节
//	printf("%d\n", sizeof(&a[0]));//4 - &a【0】是第一个元素的地址
//	printf("%d\n", sizeof(&a[0] + 1));//4 - &a【0】+1是第二个元素的地址
//	return 0;
//}

//int main()
//{
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6 - sizeof计算的是数组大小，6*1=6，单位是字节
	//printf("%d\n", sizeof(arr+0));//4 - arr是首元素的地址，arr+0还是首元素地址，地址的大小是4/8 
	//printf("%d\n", sizeof(*arr));//1 - arr是首元素地址，*arr就是首元素，首元素是字符大小的一个字节
	//printf("%d\n", sizeof(arr[1]));//1 - 
	//printf("%d\n", sizeof(&arr));//4 - &arr虽然是数组的地址，但还是地址，所以地址的大小就是4/8
	//printf("%d\n", sizeof(&arr+1));//4 - 同上
	//printf("%d\n", sizeof(&arr[0]+1));//4 - 同上
	//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//arr是abcdef\0，相当于存进去7个元素
//                        //sizeof是计算数据所占空间大小的
//	printf("%d\n", sizeof(arr));//sizeof(arr)计算的是数组的大小，单位是字节：7
//	printf("%d\n", sizeof(arr + 0));//4 - 计算的是地址的大小，arr+0计算的是首元素的地址
//	printf("%d\n", sizeof(*arr));//1 - *arr是首元素，sizeof(*arr)计算首元素大小
//	printf("%d\n", sizeof(arr[1]));//1 -  arr[1]是第二个元素，sizeof(arr[1])计算的是第二个元素的大小
//	printf("%d\n", sizeof(&arr));//4 - 计算的是地址
//	printf("%d\n", sizeof(&arr + 1));//4 - 计算的是地址
//	printf("%d\n", sizeof(&arr[0] + 1));//4 - 计算的是地址
//
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	                           //strlen是计算字符串长度的运算符
//	printf("%d\n", strlen(arr));//6 - strlen找的是\0，找到\0后，就是算\0前面有几个元素
//	printf("%d\n", strlen(arr + 0));//6 - arr是首元素地址，arr+0也是首元素地址，所以还是从首元素开始计算字符串长度
//	printf("%d\n", strlen(*arr));//报错 - 因为strlen（），（）里面的应该是一个地址，这种表达之后就相当于把是首元素a当成
//	                              //一个地址传到里面去，a的ASC码值是97，根本就不是想要的地址，所以程序会报错
//	printf("%d\n", strlen(&arr));//6 - &arr取的是数组的地址 - 数组地址 应该写成char(*)[7]=&arr，所以会报错
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";//只是把首元素地址放进p里面
//	printf("%d\n", sizeof(p));//4 - 计算的是指针变量p的大小
//	printf("%d\n", sizeof(p+1));//4 - 得到的是字符b的地址
//	printf("%d\n", sizeof(*p));//1 - *p就是字符串的第一个字符 - ’a'
//	printf("%d\n", sizeof(p[0]));//1 - p[0]==*(p+0)=='a'
//	//                             另一个例子就是int arr[10];  arr[0]==*(arr+0)
//	printf("%d\n", sizeof(&p));//4 - 计算的是地址
//	printf("%d\n", sizeof(&p + 1));//4 - 计算的是地址
//	printf("%d\n", sizeof(&p[0] + 1));//4 - 计算的是地址
//
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5 - 从b开始计算字符串的大小
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));// err                          
//	printf("%d\n", strlen(&p));//随机值，因为p存的是a的地址，&p不一定会存到哪里，所以结果是随机值
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//5
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48 - 3*4*4=48
//	printf("%d\n", sizeof(a[0][0]));//4 - 计算一个整形元素的大小
//	printf("%d\n", sizeof(a[0]));//16 - sizeof(a[0])计算的是第一行的大小（一维数组的大小），第一行有四个元素，所以是4*4=16
//	printf("%d\n", sizeof(a[0]+1));//4 - a[0]是第一行的数组名，数组名此时是首元素地址（因为数组名不是单独放在sizeof内部的），
//	//a[0]其实就是第一行第一个元素的地址。所以a[0]+1 就是第一行第二个元素的地址，地址的大小是4/8个字节
//	printf("%d\n", sizeof(*(a[0]+1)));//4 - 计算的是第一行第二个元素的大小是4个字节
//	printf("%d\n", sizeof(a+1));//4 - a是二维数组的数组名，没有sizeof(a)，也没有&(a)，所以a是首元素地址
//	//而把二维数组堪称一维数组时，二维数组的首元素是他的第一行，a就是第一行（首元素）地址
//	//a+1就是第二行的地址
//	printf("%d\n", sizeof(*(a+1)));//16 - 计算第二行的大小
//	printf("%d\n", sizeof(&a[0]+1));//4 - 计算的是第二行的地址，&先和a[0]结合，意为取出第一行的地址，+1就是取出第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 - 计算的是第二行的大小
//	printf("%d\n", sizeof(*a));//16 - a是首元素地址，是第一行。*a是第一行
//	printf("%d\n", sizeof(a[3]));//16 - sizeof里面的东西是不会进行运算的，只是通过数组名来计算他的大小
//	//所以不管a有没有第四行，都没有关系，数组名是一个一维数组，里面有4个元素，所以就是4*4=16
//	
//	return 0;
//}


//如果没有&的干扰，a就是首元素地址，有&再另行分析
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2,5  - &a是将数组的地址取出来，+1就是向后移动一下，int*（&a+1）就是将数组指针
//	//强制转化成整型指针存在ptr中，（ptr-1）说明指针又向前移动了一下，指到了5上，再解引用结果就是5。
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char* pName;
//	char cha[2];
//	short sBa[4];
//}* p;
////假设p的值为0x100000，如下的表达式的值分别为多少？
////已知结构体Test的类型的变量大小为20个字节
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n",p+0x1 );//0x100014
//	printf("%p\n",(unsigned long)p+0x1 );//0x100001 - 就是转化为整数，整数+1就是结果，所以变为了0x100001
//	printf("%p\n",(unsigned int*)p+0x1 );//0x100004
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);//%x就是表示无符号的16进制的数
//	printf("%x,%x", ptr1[-1], *ptr2);//4,20000000 - 小端存储的形式01 00 00 00 02 00 00 00 00 03 00 00 00 04 00 00 00 00
//	//ptr1[-1]==*（ptr1+(-1)）=*(ptr1-1)，所以最后的结果就是4.
//    //ptr2要用到小端存储的知识，a是首元素地址，强制转换为int再+1指针就变成了
//	//01 →00 00 00 02 00 00 00 00 03 00 00 00 04 00 00 00 00
//	//输出结果的时候，因为ptr2是int*形式，所以最后就是从指针往后取四个字节，也就是00 00 00 02
//	//因为是小端存储，所以实际打印出来的是20 00 00 00
//	return 0;
//}



//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//注意：用的是圆括号，所以是逗号表达式
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);//1 - 所以上面二维数组的结果是1，3，5
//	//在内存中的分布就是      1  3
//	//                        5  0
//	//                        0  0
//	//                  计算后就可得结果是1
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;//p和a都是首元素地址，如果强行相等的话，意思也就是p也是在a的首元素上
//
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//p[4][2]就是*（*（p+4）+2），因为是整型指针，所以一开始的
//	//+4是每+1往后走四个字节，后来的+2是每次走一个字节
//	//最后&的计算其实就是计算两个地址之间的元素个数，就是4
//	//前面那个计算的就是4在存储中的表示10000000 00000000 00000000 00000100 - 原码
//	//                                 11111111 11111111 11111111 11111011 - 反码
//	//                                 11111111 11111111 11111111 11111100 - 补码
//	//            转化为16进制的表示 0xFFFFFFFC 所以结果就是 0xFFFFFFFC                                              
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10,5 - 前面的分析指针找的都对，到最后ptr1-1就是往前移动一个指针，ptr2也是
//	return 0;
//}

//int main()
//{
//	char* a[] = { (char*)"work",(char*)"at",(char*)"alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at 
//	return 0;
//}

//int main()//这道题要想弄懂，必须画好内存图，内存图在重邮信纸上，可以翻看，要是在不会，就看指针面试题（4）的最后一道题
//{
//	char* c[] = { (char*)"ENTER",(char*)"NEW",(char*)"POINT",(char*)"FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);// POINT   ++cpp后，后面使用的也是加过的cpp，不会恢复原来的值
//	printf("%s\n", *--*++cpp+3);//ER
//	printf("%s\n", *cpp[-2]+3);//ST
//	printf("%s\n", cpp[-1][-1]+1);//EW
//
//	return 0;
//}
































































































































































































































































































