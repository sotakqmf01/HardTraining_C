#include <stdio.h>
#include <stdlib.h>

void GetString(void)
{
	char szBuffer[8] = { 0 };
	int nData = 0x11223344;
	gets_s(szBuffer);							// 강의 한번 보기, C11 버전 이후로는 get 함수가 사라졌대
	printf("%s, %08X\n", szBuffer, nData);
	return;
}

int main(void)
{
	GetString();
	return 0; 
}