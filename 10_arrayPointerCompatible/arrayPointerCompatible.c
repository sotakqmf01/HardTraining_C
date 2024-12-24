#include <stdio.h>

int main(void)
{
	char szBuffer[32] = { "You are a girl." };
	char* pszBuff = szBuffer;

	printf("%c\n", szBuffer[0]);
	printf("%c\n", *szBuffer);
	printf("%c\n", *pszBuff);
	printf("%c\n\n", *(szBuffer + 0));

	printf("%c\n", *(pszBuff + 5));
	printf("%c\n", szBuffer[5]);
	printf("%c\n\n", *(szBuffer + 5));

	printf("%s\n", &szBuffer[4]);
	printf("%s\n", &*(szBuffer + 4));
	printf("%s\n", szBuffer + 4);
	printf("%s\n", pszBuff+4);
	printf("%s\n", &pszBuff[4]);
	printf("%p\n\n", szBuffer + 4);

	printf("-----------------------------\n");

	char szBuffer2[16] = { "Hello" };
	char* pszData = szBuffer2;
	int nLength = 0;

	while (*pszData != '\0')
	{
		pszData++;
		nLength++;
	}

	printf("Length : %d\n", nLength);
	printf("Length : %d\n", strlen(szBuffer2));
	printf("Length : %d\n", strlen("World"));


	return 0;
}