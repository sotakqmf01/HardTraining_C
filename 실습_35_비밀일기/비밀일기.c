#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

int check_password(char* password, char* pw);

#define MAX 10000

int main(void) {
	//��� �ϱ�

	char* line;
	char* contents;
	char password[20] = "djsfldjf";	// �𸮾�
	char pw[20] = { 0 };
	char c;

	line = malloc(sizeof(char) * MAX);
	memset(line, 0, sizeof(char) * MAX);
	contents = malloc(sizeof(char) * MAX);
	memset(contents, 0, sizeof(char) * MAX);

	printf("��й�ȣ�� �Է��ϼ��� : ");
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

	printf("\n *** ��й�ȣ Ȯ�� ��... ***\n\n");

	if (check_password(password, pw) == 0) {
		printf(" *** ��й�ȣ�� Ʋ�Ƚ��ϴ� ***\n\n");
		printf("�� ������! ��������������������������������������������\n\n");
		return 0;
	}

	printf(" *** ��й�ȣ Ȯ�� �Ϸ� ***\n\n");

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

	printf("\n\n������ �ۼ��ϼ���! �����Ͻ÷��� ""EXIT""�� �Է��ϼ���\n");

	FILE* fp2 = NULL;
	fopen_s(&fp2, "Diary.txt", "a");
	if (fp2 == NULL) {
		puts("ERROR : Failed to open file!\n");
		return;
	}

	while (1) {
		//scanf()�� white space �����ڸ��� �ڸ��� white space �������� �Է��� ������
		// => ���忡 ���Ⱑ ������ �װ� �� �߷��� ����
		//scanf_s("%s", line, 10000);
		//getchar();

		// ����ǥ���� ���
		scanf_s("%[^\n]", line, 10000);
		getchar();	// �Է¹��ۿ� \n�� ���������� �̰� ���� ���� ���

		//fgets()�� �Է¹��� ���ڿ� ���� ���๮�ڸ� �����ϱ� ������ ���� ���(EXIT)���� ���๮��(\n)�� ���ԵǾ�� ��("EXIT\n")
		//fgets(line, sizeof(char) * MAX, stdin);

		if (strcmp(line, "EXIT") == 0) {
			printf("����ϱ� �Է��� �����մϴ�\n\n");
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