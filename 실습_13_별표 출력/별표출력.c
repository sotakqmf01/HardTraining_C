#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nInput = 0, i = 0;

	while (1)
	{
		printf("1~9까지의 숫자를 입력하세요.\n");
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
				printf("\n※※※ 1~9까지의 숫자를 입력해주세요. ※※※\n\n");
		}
		else
		{
			printf("올바른 숫자가 아닌 입력을 하였습니다. 프로그램을 종료합니다.\n");
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