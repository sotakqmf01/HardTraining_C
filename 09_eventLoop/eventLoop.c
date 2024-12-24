#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int printMenu(void){
	int nInput = 0;

	system("cls");
	printf("[1]new\t[2]search\t[3]print\t[4]remove\t[0]exit\n");
	scanf_s("%d", &nInput);
	return nInput;
};

int getAge(void) {
	int nAge = 0;
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &nAge);
	return nAge;
};

int getFee(int age)
{
	int fee = 1000;
	if (age < 20) fee /= 2;
	return fee;
};

int main(void) {
	int menu = 0, age = 0;
	while (menu = printMenu() != 0)	// EventLoop
	{
		if (menu == 1)
		{
			age = getAge();
			printf("요금은 %d원 입니다.\n", getFee(age));
			putchar('\n');
			Sleep(2000);
		}
	}
	printf("bye~\n");
	return 0;
}