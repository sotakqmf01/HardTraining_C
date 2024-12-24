#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int age = 0, fee = 1000;

	scanf_s("%d", &age);

	if (age >= 14)
	{
		if(age >= 20)
			printf("age = %d세, 성인, fee = %d원\n", age, (int)(fee*1));
		else
			printf("age = %d세, 청소년, fee = %d원\n", age, (int)(fee * 0.75));
	}
	else
	{
		if(age >= 4)
			printf("age = %d세, 어린이, fee = %d원\n", age, (int)(fee * 0.5));
		else
			printf("age = %d세, 영유아, fee = %d원\n", age, (int)(fee * 0));
	}

	return 0;
}