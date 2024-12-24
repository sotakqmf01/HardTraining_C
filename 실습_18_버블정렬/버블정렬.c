#include <stdio.h>

int main(void)
{
	int aList[5] = { 3, 5, 1, 4, 2 };

	for (int i = 0; i < 5; i++)
		printf("%d  ", aList[i]);

	putchar('\n');

	for (int i = 0; i < 4; ++i)  // 비교되는 기준이 마지막까지 갈 필요가 없음
	{
		for (int j = i+1; j < 5; ++j)
		{
			if(aList[i] > aList[j])	// 더 큰값을 찾으면 바로 자리 바꿈
			{
				int tmp = aList[i];
				aList[i] = aList[j];
				aList[j] = tmp;
			} 
		}
		for (int i = 0; i < 5; i++)
			printf("%d  ", aList[i]);

		putchar('\n');
	}
	return 0;
}