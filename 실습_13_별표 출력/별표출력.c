#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nInput = 0, i = 0;

	while (1)
	{
		printf("1~9������ ���ڸ� �Է��ϼ���.\n");
		if (scanf_s("%d", &nInput) == 1)
		{
			if (nInput >= 1 && nInput <= 9)
			{
				i = 0;
				while (i < nInput)
				{
					printf("* ");
					i++;

				}
				printf("\n\n");
			}
			else
				printf("\n�ءء� 1~9������ ���ڸ� �Է����ּ���. �ءء�\n\n");
		}
		else
		{
			printf("�ùٸ� ���ڰ� �ƴ� �Է��� �Ͽ����ϴ�. ���α׷��� �����մϴ�.\n");
			break;
		}
	}

	/*if (nInput > 9)	nInput = 9;
	else if (nInput < 1)	nInput = 1;

	while (nInput < 10 && nInput > 0)
	{
		printf("* ");
		nInput--;
	}
	printf("\n");*/

	return 0;
}