#include <stdio.h>

int main(void)
{
	int aList[5][5] = { 0 };
	int cnt = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			//aList[i][j] = (i + 1) * (j + 1);
			aList[i][j] = ++cnt;
			printf("%2d  ", aList[i][j]);
		}
		putchar('\n');
	}

	return 0;
}