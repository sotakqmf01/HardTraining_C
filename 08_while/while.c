#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch = 0;
	int nInput = -1;

	while ((ch = getchar()) != 'x')
	{
		putchar(ch);
	}

	while (nInput < 0 || nInput > 10)
	{
		printf("Input number : ");
		scanf_s("%d", &nInput);
	}

	return 0;
}