//�ṹ��
//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���

//����һ��ѧ��
//����
//����
//�绰
//�Ա�

//struct �ṹ��ؼ���  Stu - �ṹ���ǩ   struct Stu - �ṹ������
//typedef struct Stu//typedef��������������˼��ԭ������ṹ�����ֽ���struct Stu������ҲҪʹ��������Ϊ�ṹ��������Ĺ�
//{                 //����֮���ٴ��������Ϳ���ʹ����������������
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//�����ֽ���Stu
//int main()
//{
//	struct Stu s;
//	Stu s2;//�����ֶ�����
//	return 0;
//}


//�ṹ������Ķ���ͳ�ʼ��

//typedef struct Stu 
//{                 
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	struct Stu s = {"����",20,"1292395239","�е�"};//�ṹ�����ĳ�ʼ��
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
//	struct S s;//�ṹ���������Ƕ�׽ṹ��
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

//�ṹ�崫��
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
//    Stu s = {"����",20,"1292395239","�е�"};//�ṹ�����ĳ�ʼ��
//	//��ӡ�ṹ������
//	//Print��Print2�ĸ��ȽϺã�---Print2���á���ΪPrint���д��ε�ʱ��Ὣ�����ṹ�ٸ���һ�Σ�ռ�ÿռ䣬���µ�����Ӧʱ��䳤   
//	Print(s);//��Print2ֻ�Ǵ���ȥ�˵�ַ��ռ�ÿռ���٣�����Print2���ܸ���
//	Print2(&s);
//	return 0;
//}


















































































































































































