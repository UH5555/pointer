#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;//指针变量
//	printf("%d\n", p);
//	return 0;
//}

////指针类型决定了，对指针解引用的时候，有多大的权限（能操作几个字节）
//int main()
//{
//	/*printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(char*));*/
//	int a = 0x11223344;
//	/*int* pa = &a;////int*p; *p能够访问4个字节
//	*pa = 0;*///11223344--->00000000
//	printf("%d\n", a);
//	char* pb = &a;//char*p; *p能够访问1个字节
//	*pb = 0;//11223344--->11223300 
//	/*printf("%d\n", pa);
//	printf("%d\n", pb);*/
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%d\n", pa);
//	printf("%d\n", pa+1);
//	printf("%d\n", pc);
//	printf("%d\n", pc+1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名-首元素地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//野指针
//int main()
//{
//	int a;//局部变量不初始化，默认是随机值
//	int* p;//局部的指针变量，就被默认初始化随机值
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		*(p++);
//	}
//	//指针越界，野指针
//	return 0;
//}

////指针指向的空间被释放
//int* test()
//{
//	int a = 10;
//	return &a;
//}//出了这个函数后，a的空间被释放。
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}