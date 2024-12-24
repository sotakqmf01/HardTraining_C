#include <stdio.h>

int main(void)
{
	int nResult = 0;

	nResult = 3 + 4;
	//nResult = 3 / 4;

	// nResult-5의 결과는 임시결과로 메모리 어딘가 저장된 후 printf의 %d에 매칭되어 모니터에 출력됨
	printf("nResult : %d\n", nResult-5);

	return 0;
}