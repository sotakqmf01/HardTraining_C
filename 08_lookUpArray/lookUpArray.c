#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// aRate : lookup�迭
	double aRate[10] = {
		0.0, 0.1, 0.25, 0.5, 0.5,
		0.6, 0.65, 0.8, 0.8, 0.97
	};
	int nAge = 0, nFee = 1000;

	printf("���ǥ\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d�� ��� : %d��\n", i, (int)(nFee * aRate[i]));
		putchar('\n');
	}

	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &nAge);
	
	if (nAge < 1)
		nAge = 1;
	else if (nAge > 10)
		nAge = 10;

	printf("������� : %d��\n", (int)(nFee * aRate[nAge-1]));
	
	return 0;
}