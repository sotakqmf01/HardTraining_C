#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nMulTable = 0;

	scanf_s("%d", &nMulTable);

	for (int i = 1; i < 10; i++)
	{
		printf("%d * %d = %2d\n", nMulTable, i, nMulTable * i);
	}

	return 0;
}