#include <stdio.h>
#include <stdlib.h>

int MyCompare(const void* pParam1, const void* pParam2) {
	return *(int*)pParam1 - *(int*)pParam2;				// 오름차순
	//return *(int*)pParam2 - *(int*)pParam1;			// 내림차순
	//return strcmp((char*)pParam1, (char*)pParam2);	// 뭐 이런식으로 하면 문자열 정렬도 가능하지 않을까??
}

int main(void)
{
	int aList[5] = { 30, 10, 40, 50, 20 };
	int i = 0;

	qsort(aList, 5, sizeof(int), MyCompare);

	for (i = 0; i < 5; i++)
		printf("%d\t", aList[i]);

	return 0;
}