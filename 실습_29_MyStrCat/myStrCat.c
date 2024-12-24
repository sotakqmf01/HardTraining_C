#include <stdio.h>
#include <string.h>

char* MyStrCat(char* dst, char* src)
{
	while (*dst != '\0')
		++dst;
	while (*src != '\0')
		*dst++ = *src++;

	*dst = '\0';	// ���ڿ� �������� NULL �־��� ��
	return dst;		// NULL�� �� �ּҸ� ��ȯ, �ű� ���� ���ο� ���ڿ��� ���;��ϱ� ����
}

int main(void)
{
	char szBuffer[128] = { 0 };
	char* pszBuffer = NULL;

	pszBuffer = MyStrCat(szBuffer, "C:\\Program Files\\");
	pszBuffer = MyStrCat(pszBuffer, "CHS\\");
	pszBuffer = MyStrCat(pszBuffer, "C programming");

	puts(szBuffer);

	return 0;
}