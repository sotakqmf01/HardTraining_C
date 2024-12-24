#include <stdio.h>
#include <string.h>

char* MyStrCat(char* dst, char* src)
{
	while (*dst != '\0')
		++dst;
	while (*src != '\0')
		*dst++ = *src++;

	*dst = '\0';	// 문자열 마지막에 NULL 넣어준 것
	return dst;		// NULL이 들어간 주소를 반환, 거기 부터 새로운 문자열이 들어와야하기 때문
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