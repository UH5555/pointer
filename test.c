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
//     //*p = i;
//     //p++;
//		*p++ = i;
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

//int main()
//{
//	//int a = 10;
//	// 指针初始化
//	//int* pa = &a;//初始化
//	//int* p = NULL;//NULL-用来初始化指针的，给指针赋值
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	//指针指向空间释放即使其置NULL
//	pa = NULL;
//	//指针使用前检查有效性
//	if (pa != NULL)
//	{
//		*pa = 20;
//	}
//	return 0;
//}

////指针加减运算
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *p);
//		p = p + 1;
//	}*/
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", *p);
//		p += 2;
//	}
//	return 0;
//}

////指针 - 指针
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	 printf("%d\n", & arr[9] - &arr[0]);//中间元素的个数
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	//strlen - 求字符串长度 
//	//递归 - 模拟实现了strlen - 计数器的方式1，递归的方式2
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

////指针关系运算
////允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许与指向第一个元素之前的那个内存位置的指针比较
//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
//for (vp = &values[N_VALUES]; vp > &value[0])
//{
//	*--vp = 0;
//}

int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);//地址-首元素的地址
	printf("%p\n", &arr[0]);
	return 0;
}