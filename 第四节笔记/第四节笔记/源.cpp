#include <stdio.h>
//int main()
//{
//	int a = 10;//申请了4个字节的空间
//	//printf("%p\n", &a);
//	int* p = &a;//p是一个指针变量，用来申请存储a的地址的空间
//	//printf("%p\n", p);
//	*p = 20;//*:解引用操作符/间接访问操作符(通过p去寻找a，并把a改成现在需要的值，这里是20）
//	return 0;
//}
//指针变量在32位平台上是4，在64位上是8
//复杂对象要用结构体来描述。结构体--我们自己创造出的一种类型
//struct Book
//{
//	char name[20];//char都是放字符串，比如abcdefg或1，2，3，4，5或c语言程序设计等等
//	short price;
//};//注意有分号
//int main()
//{   
//	//利用结构体类型--创建一个该类型的结构体变量
//	struct Book b1 = { "c语言程序设计",55 };
//	struct Book* pb = &b1;//struct Book*是新的变量，相当于指针int*
//	printf("%s\n", pb->name);//这是更加简单的一种打印方式，也是比较好理解的
//	//printf("%s\n", (*pb).name);//利用指针可以快速实现查找
//	//printf("书名:%s\n", b1.name);
//	//printf("价格:%d\n", b1.price);
//
//	return 0;
//}
//要想改变书名--strcpy(b1.name);//strcpy-string copy-字符串拷贝 -库函数-string.h
//要想改变价格，只需要b1.price=15就可以


//           正式课第一节     分支与循环
//c语言是一门结构化的程序设计语言
//1-顺序结构  2-选择结构  3-循环结构
//分支语句：if/switch
//循环语句：while/for/do while
//c语言中每一个分号就是一个语句
//if语句    语法结构：
//  if(表达式) 
//    语句；//或者

//  if（表达式）
//     语句一；
//   else（表达式）
//     语句二；
   
//多分支
     /*if（表达式一）
        语句一；
    else if（表达式二）
         语句二；
    else
       语句三；
*/
//int main()
//{
//    int age = 10;
//    if (age < 13)
//        printf("未成年\n");
//    else if (age >= 13 && age < 23)//注意，这里应该用&&来连接两个条件
//        printf("青年\n");
//    else if (age >= 23 && age < 50)
//        printf("壮年\n");
//
//    return 0;
//}
//if语句如果要包含多条语句，必须用{}来括上,比如：
//if (age < 18)
//{
//    printf("我未成年\n");
//    printf("不能谈恋爱\n");
//}
//else
//巴拉巴拉

//int main()
//{
//    int a = 0;
//    int b = 0;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//        else              //这个else默认和最近的未匹配的if匹配，和else本身位置无关（悬空else问题）
//            printf("haha\n");
//    return 0;//所以这段代码打印出来的是空白
//}
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {                          //
//        if (b == 2)            // 这样带大括号的才是对的，输出haha
//            printf("hehe\n");  //
//    }
//    else
//        printf("haha\n");
//
//    return 0;
//}
//int main()
//{
//    int num = 4;
//    if (5 == num)//在打代码的时候，用这种反的方式更好，不用担心少打一个=，少打也能运行
//    {
//        printf("hehe\n");
//    }
//    else
//        printf("haha\n");
//    return 0;
//}
//int main()//卧槽，人生中第一次自己写出了能解决问题的代码！！！！！！
//{
//    int i = 1;
// 
//    while (i <= 100)
//    {
//        if (1 == i%2)
//        {
//            printf("i = %d\n",i);
//            i++;
//        }
//        else
//            i++;
//    }
//
//    return 0;
//}

//老师简化版如下：
//int main()
//{
//    int i = 1;
//    while (i <= 100)
//    {
//        if(1==i%2)
//        printf("%d ", i);
//        i++;
//    }
//    return 0;
//}
 
//switch语句：用来实现多分支的语句
//int  main()
//{
//    int day = 0;
//    scanf_s("%d", &day);
//    switch (day)
//    {
//    case 1:
//        printf("星期一\n");
//        break;
//    case 2:
//        printf("星期二\n");
//        break;
//    case 3:
//        printf("星期三\n");
//        break;
//    case 4:
//        printf("星期四\n");
//        break;
//    case 5:
//        printf("星期五\n");
//        break;
//    case 6:
//        printf("星期六\n");
//        break;
//    case 7:
//        printf("星期天\n");
//    }
//    return 0;
//}
//int main()
//{
//    int day = 0;
//    scanf_s("%d", &day);
//    switch (day)
//    {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        printf("工作日\n", day);//不一定每一个case后面都会跟着break,有的时候相同情况 
//        break;                //是不需要加入break的，只需要在最终结果加break就行
//    case 6:
//    case 7:
//        printf("休息日\n", day);
//        break;
//    default:
//        printf("输入错误\n");//default是用来排除其他情况的，也可以放在任何位置
//        break;
//    }
//    return 0;
//}
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)//以n为开关所以进入
//    {
//        case 1:m++;//n = 1所以执行case 1；   n == 1  m == 3
//        case 2:n++;//没有break，所以自动执行case2;   n == 2  m == 3   
//        case 3://没有break，自动执行case3
//            switch (n)//（switch可以嵌套）
//            {
//            case 1:n++;//因为n!=1,所以不执行case1
//            case 2:m++;n++;//n==2，所以执行case2  n == 3  m == 4
//                break;
//
//            }
//        case 4:m++;//因为外圈switch没有break，所以自动执行case4  n ==3  m == 5
//            break;
//        default:
//            break;
//}
//    printf("m = %d,n = %d\n", m, n);//打印出的n == 3 m == 5
//
//    return 0;
//}

//循环语句while /for /do while 
//continue的作用：终止本次循环continue后面的代码，直接到判定阶段，判断是否进行下一次循环
//int main()
//{
//    int ch = getchar();//getchar中可以输入任意字符
//    putchar(ch);//putchar中进行输出，相当于printf
//    return 0;
//}
//EOF:文件结束标志
