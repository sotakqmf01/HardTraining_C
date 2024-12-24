#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void MyStrCpy(char* pDst, int size, char* pSrc) {	// size 받아올 때 자료형이 unsigned int가 타당 : 크기는 음수가 없으니까
	//strcpy_s(pDst, size, pSrc);

	/*size_t length = 0;
	length = strlen(pSrc);*/
	
	// length랑 size보다 클 때는 어떻게 해야할지도 생각해보는 것도 좋다

	for (int i = 0; i < size; i++)	// size 대신 length
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