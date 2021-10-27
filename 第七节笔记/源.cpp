//数组：一维数组的创建：
//type_t是指数组的元素类型
//const_n是一个常量表达式，用来指定数组的大小

#include<stdio.h>
#include<string.h>
//int main()
//{   //创建十个数组-存放整形-十个
//	int arr[10] = { 1,2,3,4,5 };//不完全初始化，剩下的元素默认初始为0
//	char arr2[5] = { 'a','b' };x
//	char arr4[]= { "abcdef" };
//	printf("%d\n", sizeof(arr4));//7    sizeof是将\0为一个位置的，所以要比strlen多出一个数值
//	printf("%d\n", strlen(arr4));//6
//	return 0;
//}

//strlen和sizeof没有什么关联，strlen是求字符串长度的--只能求字符串长度，sizeof是计算变量、数组、类型的大小-单位是字节-操作符
 
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//这个结果是个随机值
//	return 0;
//}

//一维数组的使用：[]就是访问数组的操作符
//int main()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	for (i = 0;i < 6;i++)
//	{
//		printf("%c\n", arr[i]);//访问数组
//	}
//	return 0;
//}


//一维数组在内存中的存储
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//打印地址是要用%p
//	}
//	return 0;
//}
//打印后发现数组在内存中是连续存放的

//二维数组的创建
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };//意为三行四列，后面括号里面的数字意为第一行放1，2，3，第二行放4，5，剩余其他的地方自动为0
//    int arr[2][4] = { {1,2,3,4},{5,6,7,8} };//在两个[]中代表行的可以省略里面的数字，代表列的不可以省略，也就是第一个[]里可以不填数
//	return 0;                               //字，但是第二个[]里面必须填数字
//}

//二维数组的使用--使用指针
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 4;j++)
//		{
//
//			printf("%d ",arr[i][j]);//二维数组也是连续的，是第二行跟在第一行的后面的，依此类推
//		}
//	}
//	return 0;
//}



//第八节笔记
//数组作为函数参数：


//设计冒泡函数（很难）
//#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;//这里的i是角标，指这个元素初始所在的位置，可以理解为一共有十个元素，那么每个元素都要进行交换，在i不进行到最后一个数
//	for (i = 0;i < sz - 1;i++)//之前，都要循环执行
//	{
//		int j = 0;//j此时这个数在数组中的位置
//		for (j = 0;j < sz - 1 - i;j++)//比如一共有十个数，第一个数要进行9此交换，第二个数要进行8次交换。。。
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//              flag = 0；
//			}
// if(flag = =1)
// {
// break;
// }
//		}
//	}
//}
//int main()
//{
// int flag = 1;//假设这一趟的排序已经有序
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);//arr是数组，我们对数组进行传参，实际上传递过去的是数组arr首元素的地址&arr[0]
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//数组名:就是首元素地址(有两个例外)--sizeof/
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	return 0;
//}

/
