#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void MyStrCpy(char* pDst, int size, char* pSrc) {	// size �޾ƿ� �� �ڷ����� unsigned int�� Ÿ�� : ũ��� ������ �����ϱ�
	//strcpy_s(pDst, size, pSrc);

	/*size_t length = 0;
	length = strlen(pSrc);*/
	
	// length�� size���� Ŭ ���� ��� �ؾ������� �����غ��� �͵� ����

	for (int i = 0; i < size; i++)	// size ��� length
		pDst[i] = pSrc[i];

	return;
}

int main(void)
{
	char szBufferSrc[12] = { "TestString" };
	char szBufferDst[12] = { 0 };

	MyStrCpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);
	puts(szBufferDst);

	return 0;
}