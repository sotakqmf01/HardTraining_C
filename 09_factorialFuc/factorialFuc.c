#include <stdio.h>
#include <stdlib.h>


int getFactorial(int num){		// ���丮�� ��ɸ�
	int result = 1;

	if (num < 1 || num> 10)
		return 0;

	for (int i = 2; i <= num; i++)
	{
		result *= i;
	}

	return result;
};

int main(void){					// UI��
	int result = 0, input = 0;
	int check = 0;

	while (1)
	{
		printf("1 ~ 10������ ���� �� �ϳ��� �Է��Ͻÿ�.('x'�� ������ �����մϴ�)\n");
		check = scanf_s("%d", &input);

		if (check == 0)			// ���ڰ� �ƴ� ���ڸ� �Է����� ��
		{
			printf("�����մϴ�\n");
			return 0;
		}

		result = getFactorial(input);
		if (result == 0)
			printf("�߸��� �Է��Դϴ�.\n");
		else
			printf("result = %d\n", result);
	}

	return 0;
}