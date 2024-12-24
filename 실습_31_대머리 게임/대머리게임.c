#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void random_bottle();
void show_randBottle();

int answer = 0;
int bottle[4] = { 0,0,0,0 };
int treatment = 0;
int isIncluded = 0;

int main() {
	srand(time(NULL));

	treatment = rand() % 4 + 1;

	printf("\n## 대머리 게임 ##\t\t\t\t");
	printf("(treatment = %d)\n\n", treatment);

	for (int i = 0; i < 3; i++) {
		printf("> %d번째 시도 : ", i + 1);

		random_bottle();

		show_randBottle();

		if (isIncluded == 1)
			printf(" >> 머리 ON\n\n");
		else
			printf(" >> 머리 NO\n\n");

		for (int i = 0; i < 4; i++)
			bottle[i] = 0;
		isIncluded = 0;
	}

	printf("\n발모제는 몇 번일까요?? : ");
	scanf_s("%d", &answer);

	if (answer == treatment)
		printf("정답입니다~!\n\n");
	else
		printf("땡! 틀렸습니다. 정답은 %d 입니다\n\n", treatment);

	return 0;
}

void random_bottle() {
	int num = rand() % 2 + 2;					// 몇 개를 선택할 지

	for (int i = 0; i < num; i++) {				// 어느 것을 선택할 지
		int randBottle = rand() % 4 + 1;

		if (bottle[randBottle - 1] == 0) {
			bottle[randBottle - 1] = 1;
			if (randBottle == treatment)
				isIncluded = 1;
		}
		else {
			--i;
		}
	}
}
// ************************************
// 134를 뽑고 다음에는 [같은 길이의 중복되는 조합(134)]를 안 뽑으려면 어케해야 할까? (314) (143) (413) (431) 이것도 전부 같은 거라 생각하면
// 일단 134를 저장하고 다음 뽑기 때 314 143 413 등으로 뽑을 때 (3),(1),(4)를 하나씩 뽑을 때 마다 134에 뽑은 수가 잇는지 비교하고 3개 다 같으면 다시 뽑으러 가기
// ex) 만약 134를 뽑고 다음에 3,1,4 를 뽑으면 3을 뽑을 때 134와 비교, 1을 뽑을 때 134와 비교, 4를 뽑을 때 134와 비교하면 다 들어있으니 pass
// 그리고 다음에 2,3,4를 뽑았으면 2와 134 비교, 3과 134 비교, 4와 134비교 없으니 선택
// 근데 이렇게 보니까 다시 뽑을 때 마다 이전에 뽑은 모든 조합들과 비교해야해서 좀 비효율적인것 같기도..

// 뽑기 횟수(길이)가 적당히 길고 뽑아야할 대상이 많다면
// 모든 조합에 대한 정보를 어딘가 만들어 놓고 중복되는 조합을 지우면서
// 다음 뽑기에는 지워지지않고 남아있는 조합 중에서 뽑고 또 중복되는 조합을 지우는 방식도 생각해볼 수 있음
// ************************************

void show_randBottle() {
	for (int i = 0; i < 4; i++) {
		if (bottle[i] == 1)
			printf("%d ", i + 1);
	}
	printf("물약을 머리에 바릅니다\n\n");
}
