#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char szBuffer[] = { "Hello" };					// stack
	char* pszBuffer = "Hello";						// data section
	char* pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 6);		// heap
	pszData[0] = 'H';
	pszData[1] = 'e';
	pszData[2] = 'l';
	pszData[3] = 'l';
	pszData[4] = 'o';
	pszData[5] = '\0';

	// 전부 다른 '주소'를 가르키고 있음
	puts(szBuffer);
	printf("szBuffer = %p\n", szBuffer);
	puts(pszBuffer);
	printf("pszBuffer = %p, &pszBuffer = %p\n", pszBuffer, &pszBuffer);
	puts(pszData);
	printf("pszData = %p, &pszData = %p\n", pszData, &pszData);

	free(pszData);

	printf("---------------------------------------------------\n");
	// 초기화 예제
	int* pList = NULL, * pNewList = NULL;
	int aList[3] = { 0 };

	// 동적 메모리 0으로 초기화
	pList = (int*)malloc(sizeof(int) * 3);
	memset(pList, 0, sizeof(int) * 3);

	// 위에 두 줄 한줄로 줄인 것 malloc + memset = calloc
	pNewList = (int*)calloc(3, sizeof(int));

	for (int i = 0; i < 3; i++)
		printf("pList[%d]의 값 : %d\n", i, pList[i]);
	for (int i = 0; i < 3; i++)
		printf("pNewList[%d]의 값 : %d\n", i, pNewList[i]);

	free(pList);
	free(pNewList);

	printf("---------------------------------------------------\n");
	// ★★★복사 예제★★★ 중요함
	char szBuffer2[12] = { "HelloWorld" };
	char szNewBuffer[12] = { 0 };
	//szNewBuffer = szBuffer2	// 이거 안됨. 배열의 이름은 주소 '상수'임

	memcpy(szNewBuffer, szBuffer2, 4);
	puts(szNewBuffer);

	memcpy(szNewBuffer, szBuffer2, 6);
	puts(szNewBuffer);

	memcpy(szNewBuffer, szBuffer2, sizeof(szBuffer2));
	puts(szNewBuffer);

	// memcpy 내부 동작 : 하나씩 대입
	/*for (int i = 0; i < sizeof(szBuffer2); i++)
		szNewBuffer[i] = szBuffer2[i];*/

	printf("---------------------------------------------------\n");
	// 비교 예제
	char szBuffer3[12] = { "TestString" };
	char* pszNewBuffer2 = "TestString";

	printf("%d\n", memcmp(szBuffer3, pszNewBuffer2, 10));
	printf("%d\n", memcmp("teststring", pszNewBuffer2, 10));
	printf("%d\n", memcmp("DataString", pszNewBuffer2, 10));

	return 0;
}