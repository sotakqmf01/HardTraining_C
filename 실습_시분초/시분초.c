#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int time = 0;

	scanf_s("%d", &time);

	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.\n", time, time / 3600, time % 3600 / 60, time % 3600 % 60);

	return 0;
}