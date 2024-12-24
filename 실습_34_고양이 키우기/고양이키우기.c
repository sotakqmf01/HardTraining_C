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
	// 고양이 키우기
	srand(time(NULL));
	initCats();

	while (1) {
		printf("어느 고양이의 집사가 될까요?\n");
		printf("아무 키나 눌러서 확인하세요!");
		getchar();

		random_cat();

		print_cat_box();

		if (collect_num == 5) {
			printf("축하합니다. 모든 고양이를 다 모았어요! 열심히 키워주세요\n\n");
			break;
		}
	}

	return 0;
}

void initCats() {
	cats[0].name = "깜냥1";
	cats[0].age = 2;
	cats[0].character = "검정";
	cats[0].level = 2;

	cats[1].name = "귀욤2";
	cats[1].age = 3;
	cats[1].character = "작음";
	cats[1].level = 1;

	cats[2].name = "수줍3";
	cats[2].age = 3;
	cats[2].character = "숨음";
	cats[2].level = 4;

	cats[3].name = "까꿍4";
	cats[3].age = 1;
	cats[3].character = "숨음";
	cats[3].level = 2;

	cats[4].name = "돼냥5";
	cats[4].age = 5;
	cats[4].character = "배고픔";
	cats[4].level = 5;
}

void random_cat() {
	int num = rand() % 5;

	printf("\n     ----당신은 이 고양이의 집사가 되었어요!----\n");
	printf("      이름		: %s\n", cats[num].name);
	printf("      나이		: %d\n", cats[num].age);
	printf("      성격(특징)	: %s\n", cats[num].character);
	printf("      레벨		: ");
	for (int i = 0; i < cats[num].level; i++) {
		printf("★");
	}
	printf("\n     -------------------------------------------\n\n");

	cat_box[num] = &cats[num];

	// collection[num] = 0으로 이상하게 비교하고
	// print_cat_box()함수 if문에도 == 0 대신 = 0으로 오타가 났을 때 왜 오류가 발생하는가?
	// 정답은 밑에 
	if (collection[num] == 0) {
		collect_num++;
		collection[num] = 1;
	}
}

void print_cat_box() {
	printf("************** 보유한 고양이 목록이에요 *************\n");
	for (int i = 0; i < 5; i++) {
		if (collection[i] == 0) {
			printf(" (빈 박스) ");
		}
		else {
			printf(" %9s ", cat_box[i]->name);
		}
	}
	printf("\n*****************************************************\n\n");
}











// 내가 처음 랜덤하게 뽑은 고양이가 만약 3번째 고양이라 가정하면 cat_box[2]에만 구조체 주소가 들어가 있음
// print_cat_box()함수에 들어와서 if문에 이상한 비교하니 넘어가고 else로 들어오면 cat_box[0]과 cat_box[1]에는 아직 
// 구조체의 주소가 들어있지않고 0으로 초기화되어있음 => 0번지 메모리를 읽으려고하니 [엑세스 위반] 에러 발생