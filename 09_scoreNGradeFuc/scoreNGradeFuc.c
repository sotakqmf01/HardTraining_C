#include <stdio.h>
#include <stdlib.h>

int getScore() {
	int score = 0;
	printf("점수를 입력하시오 : ");
	scanf_s("%d", &score);
	return score;
};

char getGrade(int score) {
	switch (score / 10) {
	case 10:
	case 9:
		return 'A';
	case 8:
		return 'B';
	case 7:
		return 'C';
	case 6:
		return 'D';
	default:
		return 'F';
	}
};

int main(void)
{
	int score = 0;
	char grade = 0;

	score = getScore();
	grade = getGrade(score);
	printf("학점 = %c(%d)\n", grade, score);

	return 0;
}