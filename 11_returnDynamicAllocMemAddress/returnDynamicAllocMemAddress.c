#include <stdio.h>
#include <stdlib.h>

void GetName(char* pszName, int nSize) {
	printf("�̸��� �Է��ϼ��� : ");
	gets_s(pszName, nSize);
}

char* GetName2(void){
	char* pszName = NULL;
	pszName = (char*)calloc(32, sizeof(char));
	printf("�̸��� �Է��ϼ��� : ");

	fgets(pszName, sizeof(char) * 32, stdin);
	return pszName;
}

int main(void)										
{
	char szName[32] = { 0 };
	GetName(szName, sizeof(szName));	// call by reference
	printf("����� �̸��� %s �Դϴ�.\n", szName);

	char* pszName = NULL;
	pszName = GetName2();		// GetName2()�� �޸� �Ҵ�� ������ �и��Ǿ� ����
	printf("����� �̸��� %s�Դϴ�.\n", pszName);

	free(pszName);				// �߿�

	return 0;
}