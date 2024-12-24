#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nInput1 = 0, nInput2 = 0;

	printf("두 정수를 입력하세요. : ");
	scanf_s("%d%d", &nInput1, &nInput2);

	double avg = 0.0;
	avg = (nInput1 + nInput2) / 2.0;
	//avg = (nInput1 + nInput2) / 2; // [nInput1 + nInput2) / 2] 는 정수 계산이라 소수점 이하를 절사해서 임시결과가 5가 됨
	printf("avg = %.2f\n", avg);

	//printf("AVG : %.2f\n", (nInput1 + nInput2) / 2.0);

	return 0;
}