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

	printf("\n## ��Ӹ� ���� ##\t\t\t\t");
	printf("(treatment = %d)\n\n", treatment);

	for (int i = 0; i < 3; i++) {
		printf("> %d��° �õ� : ", i + 1);

		random_bottle();

		show_randBottle();

		if (isIncluded == 1)
			printf(" >> �Ӹ� ON\n\n");
		else
			printf(" >> �Ӹ� NO\n\n");

		for (int i = 0; i < 4; i++)
			bottle[i] = 0;
		isIncluded = 0;
	}

	printf("\n�߸����� �� ���ϱ��?? : ");
	scanf_s("%d", &answer);

	if (answer == treatment)
		printf("�����Դϴ�~!\n\n");
	else
		printf("��! Ʋ�Ƚ��ϴ�. ������ %d �Դϴ�\n\n", treatment);

	return 0;
}

void random_bottle() {
	int num = rand() % 2 + 2;					// �� ���� ������ ��

	for (int i = 0; i < num; i++) {				// ��� ���� ������ ��
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
// 134�� �̰� �������� [���� ������ �ߺ��Ǵ� ����(134)]�� �� �������� �����ؾ� �ұ�? (314) (143) (413) (431) �̰͵� ���� ���� �Ŷ� �����ϸ�
// �ϴ� 134�� �����ϰ� ���� �̱� �� 314 143 413 ������ ���� �� (3),(1),(4)�� �ϳ��� ���� �� ���� 134�� ���� ���� �մ��� ���ϰ� 3�� �� ������ �ٽ� ������ ����
// ex) ���� 134�� �̰� ������ 3,1,4 �� ������ 3�� ���� �� 134�� ��, 1�� ���� �� 134�� ��, 4�� ���� �� 134�� ���ϸ� �� ��������� pass
// �׸��� ������ 2,3,4�� �̾����� 2�� 134 ��, 3�� 134 ��, 4�� 134�� ������ ����
// �ٵ� �̷��� ���ϱ� �ٽ� ���� �� ���� ������ ���� ��� ���յ�� ���ؾ��ؼ� �� ��ȿ�����ΰ� ���⵵..

// �̱� Ƚ��(����)�� ������ ��� �̾ƾ��� ����� ���ٸ�
// ��� ���տ� ���� ������ ��� ����� ���� �ߺ��Ǵ� ������ ����鼭
// ���� �̱⿡�� ���������ʰ� �����ִ� ���� �߿��� �̰� �� �ߺ��Ǵ� ������ ����� ��ĵ� �����غ� �� ����
// ************************************

void show_randBottle() {
	for (int i = 0; i < 4; i++) {
		if (bottle[i] == 1)
			printf("%d ", i + 1);
	}
	printf("������ �Ӹ��� �ٸ��ϴ�\n\n");
}
