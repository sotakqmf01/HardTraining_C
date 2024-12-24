#include <stdio.h>

int main(void)
{
	int Data = 10;
	int Data2 = 20;
	
	const int* pData = &Data;
	*pData = 20;	// 메모리 내용을 바꿀 수 없다.
	pData = &Data2;
	*pData = 30;
	
	int* const pData2 = &Data;
	pData2 = NULL;	// 메모리 주소를 바꿀 수 없다.
	*pData2 = 15;

	return 0;
}