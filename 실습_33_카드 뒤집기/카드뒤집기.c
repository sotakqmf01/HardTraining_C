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

// ī�� �迭 4 * 5
// ī�忡 ���� ���� ���� �����ϴ� �迭 10
// �� ���� ī�� ¦�� �� ã�Ҵ��� üũ�ϱ� ���� �迭 10 [���ǿ����� �� ī�忡 ���� üũ�� ��](���� ������ ���� üũ����)
int card[4][5];
int check_find[10] = { 0 };
char* animal[10];
//char animal[10][10] = { "�����", "�ڳ���", "������", "�⸰", "�ϸ�", "ȣ����", "������", "��Ÿ", "����", "Ÿ��" };

int main(void) {
	srand(time(NULL));

	// ī�� �ʱ�ȭ, ���� �ʱ�ȭ
	init_card();
	init_animal();

	// ī�忡 �� ������ �ֱ�
	shuffle_animal();

	int select1, select2;
	int mis = 0;	// ���� Ƚ��

	while (1) {
		// �����ϱ� ���ϰ� ���� �����ֱ�
		print_animal();

		// ī�� �迭 �����ֱ�(ã���� �̸�, ��ã���� ��ȣ)
		print_card();

		// ������ �� ī�� �Է¹ޱ�(�̻��� ��ȣ �Է��ϸ� �߸���ٰ� �˷��ֱ�)
		printf("������ ī�� 2���� ������ : ");
		scanf_s("%d %d", &select1, &select2);
		if (select1 == select2)		// ���� ī�带 ���� �� ��ȿ
			continue;

		int select1_x = get_x(select1);
		int select1_y = get_y(select1);
		int select2_x = get_x(select2);
		int select2_y = get_y(select2);

		// �� ī�带 ���ϰ� ¦���� �ƴ���(�̹� ������������ ������)
		if (check_find[card[select1_x][select1_y]] == 0 && check_find[card[select2_x][select2_y]] == 0 &&
			(card[select1_x][select1_y] == card[select2_x][select2_y])) {
			check_find[card[select1_x][select1_y]] = 1;
			printf("      ����! : %s �߰�\n\n", animal[card[select1_x][select1_y]]);
		}
		else {
			printf("      ��!! (Ʋ�Ȱų�, �̹� ������ ī���Դϴ�)\n");
			printf("       %d : %s\n", select1, animal[card[select1_x][select1_y]]);
			printf("       %d : %s\n\n", select2, animal[card[select2_x][select2_y]]);
			mis++;
		}

		// ��� ¦�� �� ã������ �� �� Ʋ�ȴ��� �˷��ְ� ����
		if (check_pair() == 1) {
			printf(" �����մϴ�! ��� ������ �� ã�ҳ׿�~\n");
			printf(" ���ݱ��� �� %d�� �Ǽ��Ͽ����ϴ�\n\n", mis);
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
	animal[0] = "������";
	animal[1] = "�ϸ�";
	animal[2] = "�����";
	animal[3] = "������";
	animal[4] = "�⸰";
	animal[5] = "Ÿ��";
	animal[6] = "ȣ����";
	animal[7] = "����";
	animal[8] = "��Ÿ";
	animal[9] = "�ڳ���";
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

// ���ǿ��� ���� �Լ�
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

// ������ �������� ���� ī�� ã��
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
	printf(" ================����=================\n");
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
	printf(" -----------------����-----------------\n");
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
	return 1;	// ��� ī�� ¦�� ����
}