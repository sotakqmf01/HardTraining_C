#include <stdio.h>
#include <stdlib.h>

int getMax(int a, int b, int c){
	int max = a;
	if (max < b) max = b;
	if (max < c) max = c;

	return max;
}

int main(void)
{
	int a = 0, b = 0, c = 0;
	int max = 0;
	int result = 0;

	scanf_s("%d%d%d", &a, &b, &c);
	max = getMax(a, b, c);

	printf("max = %d\n", max);
	printf("max = %d\n", getMax(10,20,30)*2);
	printf("max = %d\n", result = getMax(13,24,56));

	return 0;
}