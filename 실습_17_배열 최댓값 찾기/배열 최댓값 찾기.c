#include <stdio.h>

int main(void)
{
	int nMax = 0;
	int aList[5] = { 50, 40, 10, 60, 20 };
	nMax = aList[0];

	for (int i = 1; i < 5; i++)
	{
		if (aList[i] > nMax)
			nMax = aList[i];
	}

	printf("Max = %d\n\n", nMax);

	for (int i = 1; i < 5; ++i)
	{
		int tmp = 0;
		if (aList[0] > aList[i])
		{
			tmp = aList[i];
			aList[i] = aList[0];
			aList[0] = tmp;
		}
	}

	printf("aList[0] = %d\n\n", aList[0]);


	return 0;
}