#include <stdio.h>

int add(int, int);

int main(void)
{
	printf("%d\n", add(2, 3));
	return 0;
}

int add(int a, int b)
{
	return a + b;
}