#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nInput1 = 0, nInput2 = 0;

	printf("�� ������ �Է��ϼ���. : ");
	scanf_s("%d%d", &nInput1, &nInput2);

	double avg = 0.0;
	avg = (nInput1 + nInput2) / 2.0;
	//avg = (nInput1 + nInput2) / 2; // [nInput1 + nInput2) / 2] �� ���� ����̶� �Ҽ��� ���ϸ� �����ؼ� �ӽð���� 5�� ��
	printf("avg = %.2f\n", avg);

	//printf("AVG : %.2f\n", (nInput1 + nInput2) / 2.0);

	return 0;
}