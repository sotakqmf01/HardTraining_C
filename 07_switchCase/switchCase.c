#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x = 0, y = 0, nResult = 0;
	char cOperator = 0;

	scanf_s("%d %c %d", &x, &cOperator, 1, &y);

	switch (cOperator)
	{
	case '+':
		nResult = x + y;
		break;
	case '-':
		nResult = x - y;
		break;
	case '*':
		nResult = x * y;
		break;
	case '/':
		nResult = x / y;
		break;
	default:
		printf("ERROR : �� �� ���� ��� �����Դϴ�.\n");
	}

	printf("Result = %d\n", nResult);

	return 0;
}
