#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

int check_password(char* password, char* pw);

#define MAX 10000

int main(void) {
	//비밀 일기

	char* line;
	char* contents;
	char password[20] = "djsfldjf";	// 언리얼
	char pw[20] = { 0 };
	char c;

	line = malloc(sizeof(char) * MAX);
	memset(line, 0, sizeof(char) * MAX);
	contents = malloc(sizeof(char) * MAX);
	memset(contents, 0, sizeof(char) * MAX);

	printf("비밀번호를 입력하세요 : ");
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

	printf("\n *** 비밀번호 확인 중... ***\n\n");

	if (check_password(password, pw) == 0) {
		printf(" *** 비밀번호가 틀렸습니다 ***\n\n");
		printf("너 누구야! 나가ㅏㅏㅏㅏㅏㅏㅏㅏㅏㅏㅏㅏㅏㅏㅏㅏㅏㅏㅏㅏ\n\n");
		return 0;
	}

	printf(" *** 비밀번호 확인 완료 ***\n\n");

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

	printf("\n\n내용을 작성하세요! 종료하시려면 ""EXIT""를 입력하세요\n");

	FILE* fp2 = NULL;
	fopen_s(&fp2, "Diary.txt", "a");
	if (fp2 == NULL) {
		puts("ERROR : Failed to open file!\n");
		return;
	}

	while (1) {
		//scanf()는 white space 구분자마다 자르고 white space 전까지의 입력을 가져옴
		// => 문장에 띄어쓰기가 있으면 그게 다 잘려서 나옴
		//scanf_s("%s", line, 10000);
		//getchar();

		// 정규표현식 사용
		scanf_s("%[^\n]", line, 10000);
		getchar();	// 입력버퍼에 \n가 남아있으니 이걸 빼기 위해 사용

		//fgets()는 입력받은 문자열 끝의 개행문자를 포함하기 때문에 비교할 대상(EXIT)에도 개행문자(\n)가 포함되어야 함("EXIT\n")
		//fgets(line, sizeof(char) * MAX, stdin);

		if (strcmp(line, "EXIT") == 0) {
			printf("비밀일기 입력을 종료합니다\n\n");
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