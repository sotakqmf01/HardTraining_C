#include <stdio.h>

int main(void)
{
	char mArray[2][12] = { "Hello", "World" };
	char(*pmArray)[12] = mArray;

	puts(pmArray[0]);	// = puts(pmArray);
	printf("%p\n", pmArray);
	puts(pmArray[1]);	// = puts(pmArray + 1);
	printf("%p\n", pmArray + 1);
	return 0;
}