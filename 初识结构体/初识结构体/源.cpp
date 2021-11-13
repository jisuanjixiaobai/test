//结构体
//结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量

//描述一个学生
//名字
//年龄
//电话
//性别

//struct 结构体关键字  Stu - 结构体标签   struct Stu - 结构体类型
//typedef struct Stu//typedef是重新命名的意思，原先这个结构体名字叫做struct Stu，下面也要使用他来作为结构体变量，改过
//{                 //名字之后，再创建变量就可以使用新名字来创建了
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//新名字叫做Stu
//int main()
//{
//	struct Stu s;
//	Stu s2;//这两种都可以
//	return 0;
//}


//结构体变量的定义和初始化

//typedef struct Stu 
//{                 
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	struct Stu s = {"张三",20,"1292395239","男滴"};//结构变量的初始化
//	Stu s2;
//	return 0;
//}
#include<stdio.h>
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;//结构体里面可以嵌套结构体
//	char* pc;
//};
//int main()
//{
//	char arr[10] = { "hello bit" };
//	struct T t{"hehe",{100,'w',"hello world",3.14},arr };
//	printf("%s\n", t.pc);
//	printf("%s\n", t.s.arr);
//	return 0;
//}

//结构体传参
//typedef struct Stu
//{                 
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//void Print(Stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//}
//void Print2(Stu* tmp)
//{
//	printf("name: %s\n", tmp->name);
//	printf("age: %d\n", tmp->age);
//}
//int main()
//{
//    Stu s = {"张三",20,"1292395239","男滴"};//结构变量的初始化
//	//打印结构体数据
//	//Print和Print2哪个比较好？---Print2更好。因为Print进行传参的时候会将整个结构再复制一次，占用空间，导致电脑响应时间变长   
//	Print(s);//而Print2只是传过去了地址，占用空间很少，所以Print2性能更好
//	Print2(&s);
//	return 0;
//}


















































































































































































