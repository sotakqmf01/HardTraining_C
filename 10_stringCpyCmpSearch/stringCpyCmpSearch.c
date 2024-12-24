#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char szBuffer[] = "Hello";
	char* pszBuffer = szBuffer;
	// 복사 예제
	char* pszHeap = (char*)malloc(sizeof(char)*16);
	strcpy_s(pszHeap, sizeof(char) * 16, pszBuffer);	// Deep copy
	//pszHeap = pszBuffer;								// Shallow copy -> 하지마라
	puts(pszHeap);
	free(pszHeap);

	printf("-------------------------------\n");
	// 비교 예제
	char szBuffer2[12] = { "TestString" } ;
	char* pszData = "TestString";

	printf("%d\n", strcmp(szBuffer2, pszData));
	printf("%d\n", strcmp("TestString", pszData));
	printf("%d\n", strcmp("Test", "TestString "));

	printf("-------------------------------\n");
	// strstr 예제
	char szBuffer3[32] = { "I am a boy." };

	printf("%p\n", szBuffer3);
	printf("%p\n", strstr(szBuffer3, "am"));
	printf("%p\n", strstr(szBuffer3, "boy"));

	printf("Index : %d\n", strstr(szBuffer3, "am") - szBuffer3);
	printf("Index : %d\n", strstr(szBuffer3, "boy") - szBuffer3);
	return 0;
}