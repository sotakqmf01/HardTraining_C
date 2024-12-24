#include <stdio.h>

int main(void)
{
	int nInput = 0, bResult = 0;

	scanf_s("%d", &nInput);
	bResult = 3 < nInput < 20;	// c언어에서는 이런 비교식을 우리가 생각하는대로 지원하지 않음 (3 < nInput) < 20;과 같은 식임

	printf("Result : %d (1: True, 0: False)\n", bResult);

	return 0;
}