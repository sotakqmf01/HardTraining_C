#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {

	return 0;
}



//int main(void){
//	int a[2][10] = { { 0,1,2,3,4,5 },
//					 { 6,7,8,9,10,11 } };
//	int b[10] = { 0,1,2,3,4,5 };
//
//	int* pa = a;
//
//	printf("%d\n", *pa);
//	printf("%d\n", *(pa + 10));
//
//	// ������ �迭�� �����͸� �������� ��
//	// �����ͷ� ����� ��
//	printf("%p\n", pa);
//	printf("%p\n", (pa + 10));
//	printf("%d\n", pa[1]);
//	printf("%p\n", &pa[1]);
//	printf("%p\n", &(&pa[1])[2]);
//
//	// �迭�� ����� ��
//	printf("%p\n", (a + 1));
//	printf("%d\n", **(a + 1));
//	printf("%p\n", a[1]);
//	printf("%p\n", &a[1]);
//
//	//printf("%d\n", a[1]);
//	printf("%d\n", a[0][4]);
//	printf("%d\n", a[0][5]);
//
//	return 0;
//}


//int d = 10;
//
//int main(void)
//{
//	int a = 10;	// ����
//	static int b = 10;	// ���� ����
//	char* pC = (char*)malloc(sizeof(char) * 10); // ���� �Ҵ�
//	char* pE = "Hello";	// ���ڿ� ���
//	char name[10] = "Hello";
//	
//	printf("���� �ּ� : %p\n", &a);
//	printf("���� �Ҵ� �ּ� : %p\n", pC);
//	printf("���� ���� �ּ� : %p\n", &b);
//	printf("���� ���� �ּ� : %p\n", &d);
//	printf("���ڿ� ��� �ּ� : %p\n", pE);
//	printf("�̸� : %s\n", name);
//
//	pE = "abc";
//	printf("�ٲ� ���ڿ� ��� �ּ� : %p\n", pE);
//	
//	int arr[3] = { 0, 1, 2 };
//  
//	printf("arr = %p\n", arr);
//	printf("arr[0]�� �ּ� = %p\n", &arr[0]);
// 
//	printf("arr[1]�� �� = %d\n", *(arr + 1));
//	printf("arr[1]�� �� = %d\n", arr[1]);
// 
//	printf("arr[1]�� �ּ� = %p\n", (arr + 1));
//	printf("arr[1]�� �ּ� = %p\n", &*(arr + 1));
//	printf("arr[1]�� �ּ� = %p\n", &arr[1]);
// 
//	return 0;
//}