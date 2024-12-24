#include <stdio.h>
#include <stdlib.h>

void GetName(char* pszName, int nSize) {
	printf("이름을 입력하세요 : ");
	gets_s(pszName, nSize);
}

char* GetName2(void){
	char* pszName = NULL;
	pszName = (char*)calloc(32, sizeof(char));
	printf("이름을 입력하세요 : ");

	fgets(pszName, sizeof(char) * 32, stdin);
	return pszName;
}

int main(void)										
{
	char szName[32] = { 0 };
	GetName(szName, sizeof(szName));	// call by reference
	printf("당신의 이름은 %s 입니다.\n", szName);

	char* pszName = NULL;
	pszName = GetName2();		// GetName2()는 메모리 할당과 해제가 분리되어 있음
	printf("당신의 이름은 %s입니다.\n", pszName);

	free(pszName);				// 중요

	return 0;
}