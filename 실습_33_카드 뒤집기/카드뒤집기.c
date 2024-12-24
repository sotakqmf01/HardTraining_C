#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void init_card();
void init_animal();
void shuffle_animal();
void shuffle_animal2();
int getEmptyPosition();
void print_animal();
void print_card();
int get_x(int num);
int get_y(int num);
int check_pair();

// 카드 배열 4 * 5
// 카드에 들어가는 동물 종류 저장하는 배열 10
// 각 동물 카드 짝을 다 찾았는지 체크하기 위한 배열 10 [강의에서는 각 카드에 대해 체크를 함](나는 동물에 대해 체크했음)
int card[4][5];
int check_find[10] = { 0 };
char* animal[10];
//char animal[10][10] = { "고양이", "코끼리", "원숭이", "기린", "하마", "호랑이", "강아지", "낙타", "돼지", "타조" };

int main(void) {
	srand(time(NULL));

	// 카드 초기화, 동물 초기화
	init_card();
	init_animal();

	// 카드에 각 동물들 넣기
	shuffle_animal();

	int select1, select2;
	int mis = 0;	// 실패 횟수

	while (1) {
		// 검증하기 편하게 정답 보여주기
		print_animal();

		// 카드 배열 보여주기(찾은건 이름, 못찾은건 번호)
		print_card();

		// 뒤집어 볼 카드 입력받기(이상한 번호 입력하면 잘못됬다고 알려주기)
		printf("뒤집을 카드 2개를 고르세오 : ");
		scanf_s("%d %d", &select1, &select2);
		if (select1 == select2)		// 같은 카드를 선택 시 무효
			continue;

		int select1_x = get_x(select1);
		int select1_y = get_y(select1);
		int select2_x = get_x(select2);
		int select2_y = get_y(select2);

		// 두 카드를 비교하고 짝인지 아닌지(이미 뒤집혔는지도 봐야함)
		if (check_find[card[select1_x][select1_y]] == 0 && check_find[card[select2_x][select2_y]] == 0 &&
			(card[select1_x][select1_y] == card[select2_x][select2_y])) {
			check_find[card[select1_x][select1_y]] = 1;
			printf("      빙고! : %s 발견\n\n", animal[card[select1_x][select1_y]]);
		}
		else {
			printf("      땡!! (틀렸거나, 이미 뒤집힌 카드입니다)\n");
			printf("       %d : %s\n", select1, animal[card[select1_x][select1_y]]);
			printf("       %d : %s\n\n", select2, animal[card[select2_x][select2_y]]);
			mis++;
		}

		// 모든 짝을 다 찾았으면 몇 번 틀렸는지 알려주고 종료
		if (check_pair() == 1) {
			printf(" 축하합니다! 모든 동물을 다 찾았네요~\n");
			printf(" 지금까지 총 %d번 실수하였습니다\n\n", mis);
			break;
		}
	}



	return 0;
}

void init_card() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			card[i][j] = -1;
		}
	}
}

void init_animal() {
	animal[0] = "원숭이";
	animal[1] = "하마";
	animal[2] = "고양이";
	animal[3] = "강아지";
	animal[4] = "기린";
	animal[5] = "타조";
	animal[6] = "호랑이";
	animal[7] = "돼지";
	animal[8] = "낙타";
	animal[9] = "코끼리";
}

void shuffle_animal() {
	int rand_num;
	int x, y;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 2; j++) {
			do {
				rand_num = rand() % 20;
				x = get_x(rand_num);
				y = get_y(rand_num);
			} while (card[x][y] != -1);

			card[x][y] = i;
		}
	}
}

// 강의에서 만든 함수
void shuffle_animal2() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 2; j++) {
			int pos = getEmptyPosition();
			int x = get_x(pos);
			int y = get_y(pos);

			card[x][y] = i;
		}
	}
}

// 동물이 지정되지 않은 카드 찾기
int getEmptyPosition() {
	while (1) {
		int randPos = rand() % 20;
		int x = get_x(randPos);
		int y = get_y(randPos);

		if (card[x][y] == -1)
			return randPos;
	}
	return 0;
}

void print_animal() {
	printf(" ================정답=================\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf(" %6s ", animal[card[i][j]]);
		}
		printf("\n");
	}
	printf(" ======================================\n");
}

void print_card() {
	int num = 0;
	printf(" -----------------문제-----------------\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			if (check_find[card[i][j]] == 1) {
				printf(" %6s ", animal[card[i][j]]);
				num++;
			}
			else {
				printf(" %6d ", num++);
			}
		}
		printf("\n");
	}
	printf(" --------------------------------------\n");
}

int get_x(int num) {
	return num / 5;
}

int get_y(int num) {
	return num % 5;
}

int check_pair() {
	for (int i = 0; i < 10; i++) {
		if (check_find[i] == 0) {
			return 0;
		}
	}
	return 1;	// 모든 카드 짝을 맞춤
}