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
//		*(p++);
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