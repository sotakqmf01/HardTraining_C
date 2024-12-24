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

	// ���� �ٸ� '�ּ�'�� ����Ű�� ����
	puts(szBuffer);
	printf("szBuffer = %p\n", szBuffer);
	puts(pszBuffer);
	printf("pszBuffer = %p, &pszBuffer = %p\n", pszBuffer, &pszBuffer);
	puts(pszData);
	printf("pszData = %p, &pszData = %p\n", pszData, &pszData);

	free(pszData);

	printf("---------------------------------------------------\n");
	// �ʱ�ȭ ����
	int* pList = NULL, * pNewList = NULL;
	int aList[3] = { 0 };

	// ���� �޸� 0���� �ʱ�ȭ
	pList = (int*)malloc(sizeof(int) * 3);
	memset(pList, 0, sizeof(int) * 3);

	// ���� �� �� ���ٷ� ���� �� malloc + memset = calloc
	pNewList = (int*)calloc(3, sizeof(int));

	for (int i = 0; i < 3; i++)
		printf("pList[%d]�� �� : %d\n", i, pList[i]);
	for (int i = 0; i < 3; i++)
		printf("pNewList[%d]�� �� : %d\n", i, pNewList[i]);

	free(pList);
	free(pNewList);

	printf("---------------------------------------------------\n");
	// �ڡڡں��� �����ڡڡ� �߿���
	char szBuffer2[12] = { "HelloWorld" };
	char szNewBuffer[12] = { 0 };
	//szNewBuffer = szBuffer2	// �̰� �ȵ�. �迭�� �̸��� �ּ� '���'��

	memcpy(szNewBuffer, szBuffer2, 4);
	puts(szNewBuffer);

	memcpy(szNewBuffer, szBuffer2, 6);
	puts(szNewBuffer);

	memcpy(szNewBuffer, szBuffer2, sizeof(szBuffer2));
	puts(szNewBuffer);

	// memcpy ���� ���� : �ϳ��� ����
	/*for (int i = 0; i < sizeof(szBuffer2); i++)
		szNewBuffer[i] = szBuffer2[i];*/

	printf("---------------------------------------------------\n");
	// �� ����
	char szBuffer3[12] = { "TestString" };
	char* pszNewBuffer2 = "TestString";

	printf("%d\n", memcmp(szBuffer3, pszNewBuffer2, 10));
	printf("%d\n", memcmp("teststring", pszNewBuffer2, 10));
	printf("%d\n", memcmp("DataString", pszNewBuffer2, 10));

	return 0;
}