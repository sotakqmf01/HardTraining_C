#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int max = 0, input = 0;

	scanf_s("%d", &input);
	max = input;
	//max = (max > input) ? max : input;		// ó������ �� ���ص� ��
	scanf_s("%d", &input);
	max = (max > input) ? max : input;
	// (max > input) ? max : (max=input); �̷����ص� ��
	scanf_s("%d", &input);
	max = (max > input) ? max : input;

	printf("max : %d\n", max);

	return 0;
}