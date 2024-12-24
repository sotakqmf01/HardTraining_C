#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void initData();
void printFishes();
void decrease_water(long time);
int checkFishAlive();

int fish_tank[6];
int level;

int main(void) {
	int select_num = 0;
	long startTime = 0;
	long totalElapsedTime = 0;
	long prevElapsedTime = 0;

	// 어항의 물 초기값 지정
	initData();	

	startTime = clock();			// 현재 시간을 밀리초 단위로 반환

	while (1) {
		// 어항의 물이 얼마나 있는지 보여줌
		printFishes();

		// 물을 넣을 어항 선택
		printf("몇 번 어항에 물을 주시겠습니까? ");
		scanf_s("%d", &select_num);
		if (select_num < 1 || select_num > 6) {
			printf("\n입력값이 잘못되었습니다\n\n");
			continue;
		}

		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("총 경과 시간 : %ld 초\n", totalElapsedTime);
		prevElapsedTime = totalElapsedTime - prevElapsedTime;		// 이전에 물 준 시간과 지금 물 준 시간 사이의 간격
		printf("최근 경과 시간 : %ld 초\n", prevElapsedTime);

		// 어항의 물 감소
		decrease_water(prevElapsedTime);

		// 사용자가 입력한 어항에 물 주기
		if (fish_tank[select_num - 1] <= 0) {
			printf("%d 번 물고기는 이미 죽었습니다.. \n", select_num);
		}
		else if (fish_tank[select_num - 1] + 1 <= 100) {
			printf("%d 번 어항에 물을 줍니다.. \n", select_num);
			fish_tank[select_num - 1]++;
		}

		// 레벨 업 (20초 마다 레벨업)
		if (totalElapsedTime / 20 > level - 1) {
			level++;
			printf(" **** 레벨 업 **** : %d -> %d\n\n", level - 1, level);

			if (level == 5) {
				printf("최고 레벨 달성. 게임 종료\n\n");
				exit(0);
			}
		}

		// 물고기가 살아있는지 죽었는지 확인
		if (checkFishAlive() == 0) {
			printf("모든 물고기가 죽었습니다\n\n");
			exit(0);
		}
		else {
			printf("물고기가 아직 살아 있어요\n\n");
		}

		prevElapsedTime = totalElapsedTime;
	}

	return 0;
}

void initData() {
	level = 1;
	for (int i = 0; i < 6; i++)
		fish_tank[i] = 100;
}

void printFishes() {
	printf("------------------------------------\n");
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) 
		printf(" %4d ", fish_tank[i]);
	printf("\n------------------------------------\n");
}

void decrease_water(long time) {
	for (int i = 0; i < 6; i++) {
		fish_tank[i] -= level * 2 * (int)time;
		if (fish_tank[i] < 0)
			fish_tank[i] = 0;
	}
}

int checkFishAlive() {
	for (int i = 0; i < 6; i++) {
		if (fish_tank[i] > 0)
			return 1;
	}

	return 0;
}