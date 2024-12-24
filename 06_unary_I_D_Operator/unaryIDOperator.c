#include <stdio.h>

int main(void)
{
	int x = 10;

	x = x + 1;
	printf("%d\n", x);

	x += 1;
	printf("%d\n", x);

	++x;
	printf("%d\n\n", x);

	printf("------------------\n\n");

	int a = 0, nResult = 0;

	++a;
	printf("%d\n", a);

	a++;
	printf("%d\n", a);

	nResult = ++a;
	printf("%d, %d\n", nResult, a);

	nResult = a--;
	printf("%d, %d\n", nResult, a);

	return 0;
}