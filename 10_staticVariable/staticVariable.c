#include <stdio.h>

int flag = 1;

int TestFunc(void) {
	int x = 5;
	static int nData = 10;			// 정적 변수 -> 정적 메모리
	if (flag == 1) {
		printf("&nData = %p\n\n", &nData);
		flag = 0;
	}
	++nData;
	return nData;
}

int main(void)
{
	char* pszHello = "Hello World";	// 문자열 상수 -> 정적 메모리
	printf("&pszHello = %p\n", &pszHello);
	printf("pszHello = %p\n", pszHello);
	
	printf("nData = %d\n", TestFunc());
	printf("nData = %d\n", TestFunc());
	printf("nData = %d\n", TestFunc());
	return 0;
}