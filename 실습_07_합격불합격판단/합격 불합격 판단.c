#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int score = 0;

	printf("점수를 입력하세요 : ");
	scanf_s("%d", &score);
	
	printf("결과 : %s\n", (score >= 80) ? "합격" : "불합격");

	return 0;
}