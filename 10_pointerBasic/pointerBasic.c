#include <stdio.h>

int main(void)
{
	int nData = 10;
	int* pnData = &nData;
	printf("%s\n", "nData");
	printf("%d\n", sizeof("nData"));		// 6

	printf("%d\n", nData);
	printf("%p\n", &nData);
	printf("%p\n", pnData);
	printf("%p\n", &pnData);

	return 0;
}