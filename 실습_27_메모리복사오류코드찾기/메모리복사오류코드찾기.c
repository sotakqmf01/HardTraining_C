#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char szBuffer[12] = { "HelloWorld" };
	char* pszData = NULL;
	pszData = (char*)malloc(sizeof(char) * 12);

	//pszData = szBuffer;		// 실행은 됨 but 동적 할당된 메모리는 유실됨	// Shallow copy
	//memcpy(pszData, szBuffer, sizeof(szBuffer));							// Deep copy
	//strcpy_s(pszData, sizeof(char) * 12, szBuffer);
	
	// 이 코드는 에러 발생, pszData는 포인터임, 포인터의 크기는 8byte고정임
	strcpy_s(pszData, sizeof(pszData), szBuffer);

	puts(pszData);

	// free() 필수
	free(pszData);

	return 0;
}