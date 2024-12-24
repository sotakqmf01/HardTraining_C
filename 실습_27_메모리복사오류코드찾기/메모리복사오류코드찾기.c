#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char szBuffer[12] = { "HelloWorld" };
	char* pszData = NULL;
	pszData = (char*)malloc(sizeof(char) * 12);

	//pszData = szBuffer;		// ������ �� but ���� �Ҵ�� �޸𸮴� ���ǵ�	// Shallow copy
	//memcpy(pszData, szBuffer, sizeof(szBuffer));							// Deep copy
	//strcpy_s(pszData, sizeof(char) * 12, szBuffer);
	
	// �� �ڵ�� ���� �߻�, pszData�� ��������, �������� ũ��� 8byte������
	strcpy_s(pszData, sizeof(pszData), szBuffer);

	puts(pszData);

	// free() �ʼ�
	free(pszData);

	return 0;
}