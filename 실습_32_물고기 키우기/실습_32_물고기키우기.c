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

	// ������ �� �ʱⰪ ����
	initData();	

	startTime = clock();			// ���� �ð��� �и��� ������ ��ȯ

	while (1) {
		// ������ ���� �󸶳� �ִ��� ������
		printFishes();

		// ���� ���� ���� ����
		printf("�� �� ���׿� ���� �ֽðڽ��ϱ�? ");
		scanf_s("%d", &select_num);
		if (select_num < 1 || select_num > 6) {
			printf("\n�Է°��� �߸��Ǿ����ϴ�\n\n");
			continue;
		}

		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("�� ��� �ð� : %ld ��\n", totalElapsedTime);
		prevElapsedTime = totalElapsedTime - prevElapsedTime;		// ������ �� �� �ð��� ���� �� �� �ð� ������ ����
		printf("�ֱ� ��� �ð� : %ld ��\n", prevElapsedTime);

		// ������ �� ����
		decrease_water(prevElapsedTime);

		// ����ڰ� �Է��� ���׿� �� �ֱ�
		if (fish_tank[select_num - 1] <= 0) {
			printf("%d �� ������ �̹� �׾����ϴ�.. \n", select_num);
		}
		else if (fish_tank[select_num - 1] + 1 <= 100) {
			printf("%d �� ���׿� ���� �ݴϴ�.. \n", select_num);
			fish_tank[select_num - 1]++;
		}

		// ���� �� (20�� ���� ������)
		if (totalElapsedTime / 20 > level - 1) {
			level++;
			printf(" **** ���� �� **** : %d -> %d\n\n", level - 1, level);

			if (level == 5) {
				printf("�ְ� ���� �޼�. ���� ����\n\n");
				exit(0);
			}
		}

		// ����Ⱑ ����ִ��� �׾����� Ȯ��
		if (checkFishAlive() == 0) {
			printf("��� ����Ⱑ �׾����ϴ�\n\n");
			exit(0);
		}
		else {
			printf("����Ⱑ ���� ��� �־��\n\n");
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
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
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