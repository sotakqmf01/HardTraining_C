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
				aIndex = j;		// �� ū ���� ã�Ƶ� �ٷ� �ڸ� �ٲ��� �ʰ� �ε����� ���

		if (aIndex != i) // �̹� ���ĵǾ� �ִ� ��쵵 �ֱ� ������ �� ���� ���� ���� �ٲ����� �ʾƵ� ��
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