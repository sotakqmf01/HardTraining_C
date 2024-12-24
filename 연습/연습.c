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
//	// 다차원 배열과 포인터를 연결했을 때
//	// 포인터로 사용할 때
//	printf("%p\n", pa);
//	printf("%p\n", (pa + 10));
//	printf("%d\n", pa[1]);
//	printf("%p\n", &pa[1]);
//	printf("%p\n", &(&pa[1])[2]);
//
//	// 배열로 사용할 때
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
//	int a = 10;	// 변수
//	static int b = 10;	// 정적 변수
//	char* pC = (char*)malloc(sizeof(char) * 10); // 동적 할당
//	char* pE = "Hello";	// 문자열 상수
//	char name[10] = "Hello";
//	
//	printf("변수 주소 : %p\n", &a);
//	printf("동적 할당 주소 : %p\n", pC);
//	printf("정적 변수 주소 : %p\n", &b);
//	printf("전역 변수 주소 : %p\n", &d);
//	printf("문자열 상수 주소 : %p\n", pE);
//	printf("이름 : %s\n", name);
//
//	pE = "abc";
//	printf("바뀐 문자열 상수 주소 : %p\n", pE);
//	
//	int arr[3] = { 0, 1, 2 };
//  
//	printf("arr = %p\n", arr);
//	printf("arr[0]의 주소 = %p\n", &arr[0]);
// 
//	printf("arr[1]의 값 = %d\n", *(arr + 1));
//	printf("arr[1]의 값 = %d\n", arr[1]);
// 
//	printf("arr[1]의 주소 = %p\n", (arr + 1));
//	printf("arr[1]의 주소 = %p\n", &*(arr + 1));
//	printf("arr[1]의 주소 = %p\n", &arr[1]);
// 
//	return 0;
//}