#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nData = 10;

	printf("%d, %d, %d\n", sizeof(5), sizeof(nData), sizeof(int));
	printf("%d, %d, %d\n", sizeof('A'), sizeof(char), sizeof("Hello"));		// 문자 상수는 ASCII코드 값의 정수형으로 처리됨
	printf("%d, %d\n", sizeof(123.45F), sizeof(123.45));

	printf("%d, %d\n", sizeof(nData + 10), sizeof(++nData));	// sizeof연산자는 컴파일 타임 연산자라 안에 연산식을 넣어도 작동되지 않음.
	printf("%d\n", nData);

	int aList[16];
	printf("%lld\n", sizeof(aList));	// sizeof의 피연산자가 64비트 시스템에서는 굉장히 클 수 도 있기 때문에 형식 인자를 %lld로 사용
	printf("%lld\n", _countof(aList));

	return 0;
}