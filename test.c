#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;//ָ�����
//	printf("%d\n", p);
//	return 0;
//}

////ָ�����;����ˣ���ָ������õ�ʱ���ж���Ȩ�ޣ��ܲ��������ֽڣ�
//int main()
//{
//	/*printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(char*));*/
//	int a = 0x11223344;
//	/*int* pa = &a;////int*p; *p�ܹ�����4���ֽ�
//	*pa = 0;*///11223344--->00000000
//	printf("%d\n", a);
//	char* pb = &a;//char*p; *p�ܹ�����1���ֽ�
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
//	int* p = arr;//������-��Ԫ�ص�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//Ұָ��
//int main()
//{
//	int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;//�ֲ���ָ��������ͱ�Ĭ�ϳ�ʼ�����ֵ
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
//	//ָ��Խ�磬Ұָ��
//	return 0;
//}

////ָ��ָ��Ŀռ䱻�ͷ�
//int* test()
//{
//	int a = 10;
//	return &a;
//}//�������������a�Ŀռ䱻�ͷš�
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	// ָ���ʼ��
//	//int* pa = &a;//��ʼ��
//	//int* p = NULL;//NULL-������ʼ��ָ��ģ���ָ�븳ֵ
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	//ָ��ָ��ռ��ͷż�ʹ����NULL
//	pa = NULL;
//	//ָ��ʹ��ǰ�����Ч��
//	if (pa != NULL)
//	{
//		*pa = 20;
//	}
//	return 0;
//}

////ָ��Ӽ�����
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

////ָ�� - ָ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	 printf("%d\n", & arr[9] - &arr[0]);//�м�Ԫ�صĸ���
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
//	//strlen - ���ַ������� 
//	//�ݹ� - ģ��ʵ����strlen - �������ķ�ʽ1���ݹ�ķ�ʽ2
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

////ָ���ϵ����
////����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ����ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ��Ƚ�
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
	printf("%p\n", arr);//��ַ-��Ԫ�صĵ�ַ
	printf("%p\n", &arr[0]);
	return 0;
}