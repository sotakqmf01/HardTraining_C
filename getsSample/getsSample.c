#include <stdio.h>

int main(void)
{
	char szName[32] = {0};

	printf("�̸��� �Է��ϼ��� : ");
	gets(szName);

	printf("����� �̸��� ");
	puts(szName);
	puts("�Դϴ�.");

	//---------------------------------------
	char szBuffer[8] = { 0 };

	//gets(szBuffer);
	gets_s(szBuffer, sizeof(szBuffer));
	//fgets(szBuffer, sizeof(szBuffer), stdin);

	puts(szBuffer);

	return 0;
}