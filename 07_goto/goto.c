#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nInput = 0;

INPUT :
	printf("Input number : ");
	scanf_s("%d", &nInput);

	if (nInput < 0 || nInput >10) {
		puts("0~10���� ���ڸ� �Է����ּ���.");
		goto INPUT;
	}
	puts("Ends");
	return 0;
}