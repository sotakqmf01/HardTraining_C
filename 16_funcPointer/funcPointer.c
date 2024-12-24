#include <stdio.h>

int GetMax(int a, int b, int c) {
	int nMax = a;
	if (nMax < b) nMax = b;
	if (nMax < c) nMax = c;
	return nMax;
}

int main(void)
{
	int (*pfGetMax)(int, int, int) = 0x0000000140011366;	// 간접 참조 수준이 안맞다고 warning 뜨는데 강제로 형변환 해주면 안뜸

	printf("GetMax함수의 주소 : %p\n", GetMax);
	printf("max : %d\n", pfGetMax(1, 3, 2));
	printf("max : %d\n", GetMax(1, 3, 2));
	return 0;
}

// alt+F7 -> 링커 -> 고급 -> 임의 기준 주소 (예->아니오로 바꾸면 함수의 주소가 고정됨)
// 0000000140011366