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

		// 입력버퍼에 있는 개행문자를 가져오는걸 눈으로 보기 위해 만듦
		if (ch == '\n')
			ch = '!';

		printf("i : %d, ch : %c\n", i, ch);
	}

	return 0;
}