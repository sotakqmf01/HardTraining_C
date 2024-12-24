#include <stdio.h>

int main(void)
{
	char szName[32] = {0};

	printf("이름을 입력하세요 : ");
	gets(szName);

	printf("당신의 이름은 ");
	puts(szName);
	puts("입니다.");

	//---------------------------------------
	char szBuffer[8] = { 0 };

	//gets(szBuffer);
	gets_s(szBuffer, sizeof(szBuffer));
	//fgets(szBuffer, sizeof(szBuffer), stdin);

	puts(szBuffer);

	return 0;
}