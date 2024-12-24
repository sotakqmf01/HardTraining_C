#include <stdio.h>

int main(void)
{
	int aList[5][5] = { 0 };
	int cnt = 0;
	int x = 0;
	int y = -1;		// 처음 cnt를 배열에 넣을 때 index에 대한 산술을 먼저 하고 넣기 때문에 0이 아니라 -1
	int dir = 1;	// 방향을 바꿔주는 요소

	for (int i = 9; i > 0; i -= 2) {		// 내가 한 것처럼 ㄱ세트, ㄴ세트로 묶었을 때의 묶인 배열들의 수만큼 반복
		for (int j = 0; j < i; j++) {		// 배열을 묶었을 때 그 개수만큼 반복
			if (j <= (i / 2))		// 행 고정
				y += dir;
			else if (j > i / 2)		// 열 고정
				x += dir;
			aList[x][y] = ++cnt;
		}
		dir = -dir;	// 양수, 음수를 번갈아가므로 방향을 바꿀 수 있음
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			printf("%2d  ", aList[i][j]);
		putchar('\n');
	}
	return 0;
}