#include <stdio.h>

int main(void)
{
	int aList[5][5] = { 0 };
	int cnt = 0;
	int x = 0;
	int y = -1;		// ó�� cnt�� �迭�� ���� �� index�� ���� ����� ���� �ϰ� �ֱ� ������ 0�� �ƴ϶� -1
	int dir = 1;	// ������ �ٲ��ִ� ���

	for (int i = 9; i > 0; i -= 2) {		// ���� �� ��ó�� ����Ʈ, ����Ʈ�� ������ ���� ���� �迭���� ����ŭ �ݺ�
		for (int j = 0; j < i; j++) {		// �迭�� ������ �� �� ������ŭ �ݺ�
			if (j <= (i / 2))		// �� ����
				y += dir;
			else if (j > i / 2)		// �� ����
				x += dir;
			aList[x][y] = ++cnt;
		}
		dir = -dir;	// ���, ������ �����ư��Ƿ� ������ �ٲ� �� ����
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			printf("%2d  ", aList[i][j]);
		putchar('\n');
	}
	return 0;
}