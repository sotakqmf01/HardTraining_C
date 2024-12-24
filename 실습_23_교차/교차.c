#include <stdio.h>

int main(void)
{
	int aList[5][5] = { 0 };
	int cnt = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i % 2 == 0)
				aList[i][j] = ++cnt;
			else
				aList[i][4 - j] = ++cnt;
		}
	}

	/*int flag = 1;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (flag)
				aList[i][j] = ++cnt;
			else
				aList[i][4 - j] = ++cnt;
		}
		flag = !flag;
	}*/

	
	/*for (int i = 0; i < 5; i++)
	{
		int cnt2 = 4;
		for (int j = 0; j < 5; j++)
		{
			if (i % 2 == 0)
				aList[i][j] = ++cnt;
			else {
				aList[i][j] = ++cnt + cnt2;
				cnt2 -= 2;
			}
		}
	}*/

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%2d  ", aList[i][j]);
		}
		putchar('\n');
	}

	return 0;
}