#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 0, max = 0;

	scanf_s("%d", &a);
	max = a;

	scanf_s("%d", &a);
	if (a > max) max = a;

	scanf_s("%d", &a);
	if (a > max) max = a;
	
	printf("max = %d\n", max);

	return 0;
}