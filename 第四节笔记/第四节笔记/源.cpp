#include <stdio.h>
//int main()
//{
//	int a = 10;//������4���ֽڵĿռ�
//	//printf("%p\n", &a);
//	int* p = &a;//p��һ��ָ���������������洢a�ĵ�ַ�Ŀռ�
//	//printf("%p\n", p);
//	*p = 20;//*:�����ò�����/��ӷ��ʲ�����(ͨ��pȥѰ��a������a�ĳ�������Ҫ��ֵ��������20��
//	return 0;
//}
//ָ�������32λƽ̨����4����64λ����8
//���Ӷ���Ҫ�ýṹ�����������ṹ��--�����Լ��������һ������
//struct Book
//{
//	char name[20];//char���Ƿ��ַ���������abcdefg��1��2��3��4��5��c���Գ�����Ƶȵ�
//	short price;
//};//ע���зֺ�
//int main()
//{   
//	//���ýṹ������--����һ�������͵Ľṹ�����
//	struct Book b1 = { "c���Գ������",55 };
//	struct Book* pb = &b1;//struct Book*���µı������൱��ָ��int*
//	printf("%s\n", pb->name);//���Ǹ��Ӽ򵥵�һ�ִ�ӡ��ʽ��Ҳ�ǱȽϺ�����
//	//printf("%s\n", (*pb).name);//����ָ����Կ���ʵ�ֲ���
//	//printf("����:%s\n", b1.name);
//	//printf("�۸�:%d\n", b1.price);
//
//	return 0;
//}
//Ҫ��ı�����--strcpy(b1.name);//strcpy-string copy-�ַ������� -�⺯��-string.h
//Ҫ��ı�۸�ֻ��Ҫb1.price=15�Ϳ���


//           ��ʽ�ε�һ��     ��֧��ѭ��
//c������һ�Žṹ���ĳ����������
//1-˳��ṹ  2-ѡ��ṹ  3-ѭ���ṹ
//��֧��䣺if/switch
//ѭ����䣺while/for/do while
//c������ÿһ���ֺž���һ�����
//if���    �﷨�ṹ��
//  if(���ʽ) 
//    ��䣻//����

//  if�����ʽ��
//     ���һ��
//   else�����ʽ��
//     ������
   
//���֧
     /*if�����ʽһ��
        ���һ��
    else if�����ʽ����
         ������
    else
       �������
*/
//int main()
//{
//    int age = 10;
//    if (age < 13)
//        printf("δ����\n");
//    else if (age >= 13 && age < 23)//ע�⣬����Ӧ����&&��������������
//        printf("����\n");
//    else if (age >= 23 && age < 50)
//        printf("׳��\n");
//
//    return 0;
//}
//if������Ҫ����������䣬������{}������,���磺
//if (age < 18)
//{
//    printf("��δ����\n");
//    printf("����̸����\n");
//}
//else
//��������

//int main()
//{
//    int a = 0;
//    int b = 0;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//        else              //���elseĬ�Ϻ������δƥ���ifƥ�䣬��else����λ���޹أ�����else���⣩
//            printf("haha\n");
//    return 0;//������δ����ӡ�������ǿհ�
//}
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {                          //
//        if (b == 2)            // �����������ŵĲ��ǶԵģ����haha
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
//    if (5 == num)//�ڴ�����ʱ�������ַ��ķ�ʽ���ã����õ����ٴ�һ��=���ٴ�Ҳ������
//    {
//        printf("hehe\n");
//    }
//    else
//        printf("haha\n");
//    return 0;
//}
//int main()//�Բۣ������е�һ���Լ�д�����ܽ������Ĵ��룡����������
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

//��ʦ�򻯰����£�
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
 
//switch��䣺����ʵ�ֶ��֧�����
//int  main()
//{
//    int day = 0;
//    scanf_s("%d", &day);
//    switch (day)
//    {
//    case 1:
//        printf("����һ\n");
//        break;
//    case 2:
//        printf("���ڶ�\n");
//        break;
//    case 3:
//        printf("������\n");
//        break;
//    case 4:
//        printf("������\n");
//        break;
//    case 5:
//        printf("������\n");
//        break;
//    case 6:
//        printf("������\n");
//        break;
//    case 7:
//        printf("������\n");
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
//        printf("������\n", day);//��һ��ÿһ��case���涼�����break,�е�ʱ����ͬ��� 
//        break;                //�ǲ���Ҫ����break�ģ�ֻ��Ҫ�����ս����break����
//    case 6:
//    case 7:
//        printf("��Ϣ��\n", day);
//        break;
//    default:
//        printf("�������\n");//default�������ų���������ģ�Ҳ���Է����κ�λ��
//        break;
//    }
//    return 0;
//}
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)//��nΪ�������Խ���
//    {
//        case 1:m++;//n = 1����ִ��case 1��   n == 1  m == 3
//        case 2:n++;//û��break�������Զ�ִ��case2;   n == 2  m == 3   
//        case 3://û��break���Զ�ִ��case3
//            switch (n)//��switch����Ƕ�ף�
//            {
//            case 1:n++;//��Ϊn!=1,���Բ�ִ��case1
//            case 2:m++;n++;//n==2������ִ��case2  n == 3  m == 4
//                break;
//
//            }
//        case 4:m++;//��Ϊ��Ȧswitchû��break�������Զ�ִ��case4  n ==3  m == 5
//            break;
//        default:
//            break;
//}
//    printf("m = %d,n = %d\n", m, n);//��ӡ����n == 3 m == 5
//
//    return 0;
//}

//ѭ�����while /for /do while 
//continue�����ã���ֹ����ѭ��continue����Ĵ��룬ֱ�ӵ��ж��׶Σ��ж��Ƿ������һ��ѭ��
//int main()
//{
//    int ch = getchar();//getchar�п������������ַ�
//    putchar(ch);//putchar�н���������൱��printf
//    return 0;
//}
//EOF:�ļ�������־
