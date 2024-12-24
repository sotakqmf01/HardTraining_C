#include <stdio.h>

int main(void)
{
	int data = 0;
	char ch = 0;

	data = 256;  // unsigned int �ִ밪 = 4294967295
	ch = data;
	printf("%d\n", ch);
	return 0;
}