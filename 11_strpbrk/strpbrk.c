#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char szBuffer[128] = { 0 };
	char szSep[128] = { 0 };
	char* pszStart = szBuffer;

	printf("Input String : ");
	gets_s(szBuffer, sizeof(szBuffer));

	printf("Input Seperater : ");
	gets_s(szSep, sizeof(szSep));

	while ((pszStart = strpbrk(pszStart, szSep)) != NULL)
	{
		printf("[%p] Index : %2d, %c\n", pszStart, pszStart - szBuffer, *pszStart);
		pszStart++;		// 없으면 무한 루프 돎
	}

	return 0;
}