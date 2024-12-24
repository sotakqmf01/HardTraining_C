#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct Cat {
	char* name;
	int age;
	char* character;
	int level;
}Cat;

Cat cats[5] = { 0 };
Cat* cat_box[5] = { 0 };
int collection[5] = { 0 };
int collect_num = 0;

void initCats();
void random_cat();
void print_cat_box();

int main() {
	// ����� Ű���
	srand(time(NULL));
	initCats();

	while (1) {
		printf("��� ������� ���簡 �ɱ��?\n");
		printf("�ƹ� Ű�� ������ Ȯ���ϼ���!");
		getchar();

		random_cat();

		print_cat_box();

		if (collect_num == 5) {
			printf("�����մϴ�. ��� ����̸� �� ��Ҿ��! ������ Ű���ּ���\n\n");
			break;
		}
	}

	return 0;
}

void initCats() {
	cats[0].name = "����1";
	cats[0].age = 2;
	cats[0].character = "����";
	cats[0].level = 2;

	cats[1].name = "�Ϳ�2";
	cats[1].age = 3;
	cats[1].character = "����";
	cats[1].level = 1;

	cats[2].name = "����3";
	cats[2].age = 3;
	cats[2].character = "����";
	cats[2].level = 4;

	cats[3].name = "���4";
	cats[3].age = 1;
	cats[3].character = "����";
	cats[3].level = 2;

	cats[4].name = "�ų�5";
	cats[4].age = 5;
	cats[4].character = "�����";
	cats[4].level = 5;
}

void random_cat() {
	int num = rand() % 5;

	printf("\n     ----����� �� ������� ���簡 �Ǿ����!----\n");
	printf("      �̸�		: %s\n", cats[num].name);
	printf("      ����		: %d\n", cats[num].age);
	printf("      ����(Ư¡)	: %s\n", cats[num].character);
	printf("      ����		: ");
	for (int i = 0; i < cats[num].level; i++) {
		printf("��");
	}
	printf("\n     -------------------------------------------\n\n");

	cat_box[num] = &cats[num];

	// collection[num] = 0���� �̻��ϰ� ���ϰ�
	// print_cat_box()�Լ� if������ == 0 ��� = 0���� ��Ÿ�� ���� �� �� ������ �߻��ϴ°�?
	// ������ �ؿ� 
	if (collection[num] == 0) {
		collect_num++;
		collection[num] = 1;
	}
}

void print_cat_box() {
	printf("************** ������ ����� ����̿��� *************\n");
	for (int i = 0; i < 5; i++) {
		if (collection[i] == 0) {
			printf(" (�� �ڽ�) ");
		}
		else {
			printf(" %9s ", cat_box[i]->name);
		}
	}
	printf("\n*****************************************************\n\n");
}











// ���� ó�� �����ϰ� ���� ����̰� ���� 3��° ����̶� �����ϸ� cat_box[2]���� ����ü �ּҰ� �� ����
// print_cat_box()�Լ��� ���ͼ� if���� �̻��� ���ϴ� �Ѿ�� else�� ������ cat_box[0]�� cat_box[1]���� ���� 
// ����ü�� �ּҰ� ��������ʰ� 0���� �ʱ�ȭ�Ǿ����� => 0���� �޸𸮸� ���������ϴ� [������ ����] ���� �߻�