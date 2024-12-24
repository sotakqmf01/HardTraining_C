#include <stdio.h>

int main(void)
{
	int aList[5] = { 3, 4, 1, 5, 2 };
	
	for (int i = 0; i < 5; i++)
		printf("%d  ", aList[i]);

	putchar('\n');

	for (int i = 0; i < 4; i++)
	{
		int aIndex = i;
		for (int j = i + 1; j < 5; j++)
			if (aList[aIndex] > aList[j])
				aIndex = j;		// 더 큰 값을 찾아도 바로 자리 바꾸지 않고 인덱스만 기억

		if (aIndex != i) // 이미 정렬되어 있는 경우도 있기 때문에 그 경우는 굳이 값을 바꿔주지 않아도 됨
		{
			int tmp = aList[aIndex];
			aList[aIndex] = aList[i];
			aList[i] = tmp;
		}

		for (int j = 0; j < 5; j++)
			printf("%d  ", aList[j]);

		putchar('\n');
	}

	return 0;
}