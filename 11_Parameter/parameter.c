#include <stdio.h>

void Testfunc(int a, int b)
{
	int c = 20;
	a = 10;
}

int Add(int a, int b)			// Call by Value
{
	int c = 0;
	c = a + b;
	return c;
}

int Add2(int* a, int* b)		// Call by Reference
{
	return *a + *b;
}

int main(void)
{
	int data = 0;
	int x = 3, y = 4;

	//Testfunc(5, 10);
	data = Add(3, 4);
	printf("%d\n", Add2(&x, &y));

	return 0;
}