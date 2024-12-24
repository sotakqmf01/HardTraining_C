#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int Buff = 0;

	scanf_s("%d", &Buff);
	printf("Buff = %d\n", Buff);

	char szBufferLeft[32] = { 0 };
	char szBufferRight[32] = { 0 };

	scanf_s("%s%s", szBufferLeft, (unsigned)_countof(szBufferLeft), szBufferRight, (unsigned)_countof(szBufferRight));
	printf("¹®ÀÚ¿­ : %s %s \n", szBufferLeft, szBufferRight);

	char chBuffer1[32] = { 0 };
	char chBuffer2[32] = { 0 };

	gets_s(chBuffer1, sizeof(chBuffer1));
	gets_s(chBuffer2, sizeof(chBuffer2));

	printf("1 = '%s', 2 = '%s'\n", chBuffer1, chBuffer2);

	return 0;
}