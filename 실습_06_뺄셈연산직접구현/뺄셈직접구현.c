#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, result = 0;

	scanf_s("%d%d", &a, &b);

	result = a + (~b + 1);

	//result & 0x00000001 비트 연산자로 홀수 짝수 구분하는 방법

	printf("결과:%d\n", result);

	return 0;

}