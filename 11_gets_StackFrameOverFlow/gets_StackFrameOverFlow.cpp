#include <stdio.h>
#include <stdlib.h>

void GetString(void)
{
	char szBuffer[8] = { 0 };
	int nData = 0x11223344;
	gets_s(szBuffer);							// ���� �ѹ� ����, C11 ���� ���ķδ� get �Լ��� �������
	printf("%s, %08X\n", szBuffer, nData);
	return;
}

int main(void)
{
	GetString();
	return 0; 
}