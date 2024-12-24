#include <stdio.h>
#include <stdlib.h>


int getFactorial(int num){		// 팩토리얼 기능만
	int result = 1;

	if (num < 1 || num> 10)
		return 0;

	for (int i = 2; i <= num; i++)
	{
		result *= i;
	}

	return result;
};

int main(void){					// UI만
	int result = 0, input = 0;
	int check = 0;

	while (1)
	{
		printf("1 ~ 10까지의 숫자 중 하나를 입력하시오.('x'를 누르면 종료합니다)\n");
		check = scanf_s("%d", &input);

		if (check == 0)			// 숫자가 아닌 문자를 입력했을 때
		{
			printf("종료합니다\n");
			return 0;
		}

		result = getFactorial(input);
		if (result == 0)
			printf("잘못된 입력입니다.\n");
		else
			printf("result = %d\n", result);
	}

	return 0;
}