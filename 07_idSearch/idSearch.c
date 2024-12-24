#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nInput = 0;
	scanf_s("%d", &nInput);

	if (nInput > 10)
	{
		printf("before : %d\n", nInput);

		int nInput = 20;
		printf("after : %d\n", nInput);

		if (nInput == 20)
		{
			int nInput = 30;
			printf("%d\n", nInput);
		}
	}

	printf("%d\n", nInput);		// 뭐가 나올지 생각해보기

	return 0;
} 