#include <stdio.h>

int main(void)
{
	char ch = 0;

	for(int i = 0 ; ; i++)
	{
		ch = getchar();

		if (ch == 'x')
			break;

		if (ch == 'q')
			continue;

		// �Է¹��ۿ� �ִ� ���๮�ڸ� �������°� ������ ���� ���� ����
		if (ch == '\n')
			ch = '!';

		printf("i : %d, ch : %c\n", i, ch);
	}

	return 0;
}