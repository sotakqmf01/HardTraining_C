#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 0, sum = 0;

	scanf_s("%d", &a);
	sum += a;

	scanf_s("%d", &a);
	sum += a;

	scanf_s("%d", &a);
	sum += a;

	printf("Total : %d\n", sum);

	return 0;
}