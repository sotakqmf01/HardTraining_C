#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 0, b = 0;

	scanf_s("%d%d", &a, &b);

	int tmp = 0;
	
	tmp = a;
	a = b;
	b = tmp;

	printf("a : %d, b : %d\n", a, b);
}