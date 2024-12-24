#include <stdio.h>

int main(void)
{
	int aList[5] = { 0 };
	int* pnData = aList;
	//int* pnData = &aList[0];

	printf("aList[0] : %d\n", aList[0]);

	*pnData = 20;
	printf("aList[0] : %d\n", aList[0]);
	printf("pnData[0] : %d\n", pnData[0]);

	printf("-----------------------------------------------------------\n");

	char szBuffer[16] = { "Hello" };
	char* pszData = szBuffer;

	while (*pszData != '\0')
		pszData++;

	printf("pszData = %p\n", pszData);
	printf("&pszData = %p\n", &pszData);
	printf("szBuffer : %p\n", szBuffer);
	printf("Length : %d\n", pszData - szBuffer);

	return 0;
}