#include <stdio.h>

int main(void)
{
	int aList[5] = { 3, 5, 1, 4, 2 };

	for (int i = 0; i < 5; i++)
		printf("%d  ", aList[i]);

	putchar('\n');

	for (int i = 0; i < 4; ++i)  // �񱳵Ǵ� ������ ���������� �� �ʿ䰡 ����
	{
		for (int j = i+1; j < 5; ++j)
		{
			if(aList[i] > aList[j])	// �� ū���� ã���� �ٷ� �ڸ� �ٲ�
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