#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

int check_password(char* password, char* pw);

#define MAX 10000

int main(void) {
	//搾腔 析奄

	char* line;
	char* contents;
	char password[20] = "djsfldjf";	// 情軒杖
	char pw[20] = { 0 };
	char c;

	line = malloc(sizeof(char) * MAX);
	memset(line, 0, sizeof(char) * MAX);
	contents = malloc(sizeof(char) * MAX);
	memset(contents, 0, sizeof(char) * MAX);

	printf("搾腔腰硲研 脊径馬室推 : ");
	int i = 0;
	while (1) {
		c = _getch();

		if (c != 13) {
			printf("*");
			pw[i] = c;
			i++;
		}
		else {
			pw[i] = '\0';
			break;
		}
	}

	printf("\n *** 搾腔腰硲 溌昔 掻... ***\n\n");

	if (check_password(password, pw) == 0) {
		printf(" *** 搾腔腰硲亜 堂携柔艦陥 ***\n\n");
		printf("格 刊姥醤! 蟹亜たたたたたたたたたたたたたたたたたたたた\n\n");
		return 0;
	}

	printf(" *** 搾腔腰硲 溌昔 刃戟 ***\n\n");

	FILE* fp = NULL;
	fopen_s(&fp, "Diary.txt", "a+");
	if (fp == NULL) {
		puts("ERROR : Failed to open file!\n");
		return;
	}

	while (fgets(contents, sizeof(char) * MAX, fp)) {
		printf("%s", contents);
	}

	fclose(fp);

	printf("\n\n鎧遂聖 拙失馬室推! 曽戟馬獣形檎 ""EXIT""研 脊径馬室推\n");

	FILE* fp2 = NULL;
	fopen_s(&fp2, "Diary.txt", "a");
	if (fp2 == NULL) {
		puts("ERROR : Failed to open file!\n");
		return;
	}

	while (1) {
		//scanf()澗 white space 姥歳切原陥 切牽壱 white space 穿猿走税 脊径聖 亜閃身
		// => 庚舌拭 句嬢床奄亜 赤生檎 益惟 陥 設形辞 蟹身
		//scanf_s("%s", line, 10000);
		//getchar();

		// 舛鋭妊薄縦 紫遂
		scanf_s("%[^\n]", line, 10000);
		getchar();	// 脊径獄遁拭 \n亜 害焼赤生艦 戚杏 皐奄 是背 紫遂

		//fgets()澗 脊径閤精 庚切伸 魁税 鯵楳庚切研 匂敗馬奄 凶庚拭 搾嘘拝 企雌(EXIT)拭亀 鯵楳庚切(\n)亜 匂敗鞠嬢醤 敗("EXIT\n")
		//fgets(line, sizeof(char) * MAX, stdin);

		if (strcmp(line, "EXIT") == 0) {
			printf("搾腔析奄 脊径聖 曽戟杯艦陥\n\n");
			break;
		}

		fputs(line, fp2);
		fputs("\n", fp2);
	}

	fclose(fp2);
	free(line);
	free(contents);

	return 0;
}

int check_password(char* password, char* pw) {
	if (strcmp(password, pw) == 0)
		return 1;
	else
		return 0;
}