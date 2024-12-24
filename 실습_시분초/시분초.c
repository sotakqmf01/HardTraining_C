#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int time = 0;

	scanf_s("%d", &time);

	printf("%d초는 %02d시간 %02d분 %02d초 입니다.\n", time, time / 3600, time % 3600 / 60, time % 3600 % 60);

	return 0;
}