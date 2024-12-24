#include <stdio.h>

int main(void)
{
	int aList[6][6] = { 0 };
	int cnt = 0;
	int start = 0, end = (sizeof(aList) / sizeof(aList[0]))-1;	// 반복이 될수록 채워야할 배열이 줄어들기 때문에 이에 대응하기 위한 변수
	int flagRnC = 1, flagFillDirect = 1;						// flagRnC : '행'이 고정될지 '열'이 고정될지를 결정, flagFillDirect : '순'방향으로 채울지 '역'방향으로 채울지 결정

	for (int k = 0; k < (sizeof(aList) / sizeof(aList[0])); k++)	// flag로 묶인 세트를 배열 크기만큼 반복해야됨
	{
		for (int i = 0; i < 2; i++)	// 한번 꺾이는걸 세트로 묶어줌,  ㄱ(11→,01↓)세트 : 순방향으로 넣는 세트, ㄴ(10←,00↑)세트 : 역방향으로 넣는 세트
		{
			if (flagRnC == 1)	// '행' 고정
			{
				for (int j = start; j <= end; j++)
				{
					if (flagFillDirect == 1)	// '순'방향으로 채우기
						aList[start][j] = ++cnt;													//11 행(↕) 고정시키고 열(↔) '순'방향 채우기
					else {						// '역'방향으로 채우기
						if (j != start)	// 이미 채워진 부분을 그냥 넘어가기 위함
							aList[end][(sizeof(aList) / sizeof(aList[0]))-1 -  j] = ++cnt;			//10 행(↕) 고정시키고 열(↔) '역'방향 채우기
					}
				}
				flagRnC = !flagRnC; // 다음 반복에 세트로 묶여있는 다음 방향을 하기 위해 (11→01) / (10→00)
			}
			else{				// '열' 고정
				for (int j = start ; j <= end; j++)
				{
					if (flagFillDirect == 1)
					{
						if (j != start)
							aList[j][end] = ++cnt;													//01 열(↔) 고정시키고 행(↕) '순'방향 채우기
					}
					else {
						if (j != start && j != end)	// 00일 때는 배열의 시작과 끝이 이미 앞에서 채워졌기 때문에 넘어감
							aList[(sizeof(aList) / sizeof(aList[0]))-1 - j][start] = ++cnt;			//00 열(↔) 고정시키고 행(↕) '역'방향 채우기
					}
				}
				flagRnC = !flagRnC;
			}
		}
		// 여기서 start, end값이 변해야함
		if (k % 2 == 1) {	// 두 세트가 끝나면 배열은 한바퀴가 채웠졌으니까 시작과 끝을 한 칸씩 땡겨야 함
			start++;
			end--;
		}

		flagFillDirect = !flagFillDirect;	// 다음 세트를 하기 위해 세트를 묶기 위해 2번 반복되는 반복문(변수 i)이 끝나고나서 값을 바꿔줌
	}

	for (int i = 0; i < (sizeof(aList) / sizeof(aList[0])); i++)
	{
		for (int j = 0; j < (sizeof(aList) / sizeof(aList[0])); j++)
		{
			printf("%2d  ", aList[i][j]);
		}
		putchar('\n');
	}

	return 0;
}