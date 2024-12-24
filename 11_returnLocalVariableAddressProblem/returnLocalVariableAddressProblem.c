#include <stdio.h>

int* TestFunc(void) {
	int nData = 10;
	return &nData;
}

int* TestFunc2(void){
	int a = 5;
	return NULL;
}

int main(void)
{
	int* pnData = NULL;
	pnData = TestFunc();
	//TestFunc2();

	printf("%d\n", *pnData);		// TestFunc2 주석 풀면 왜 5가 나오는지 한 번 생각해보기, 스택메모리 그리면서 따라가는것도 좋음
	return 0;
}