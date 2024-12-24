#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int age = 0;

	scanf_s("%d", &age);
	if(age>=20)
		printf("나이 : 20, 최종요금 : 1000원\n", age);
	if(age<20)
		printf("나이 : %d, 최종요금 : 750원\n", age);

	scanf_s("%d", &age);
	if (age >= 20)
		printf("나이 : 20, 최종요금 : 1000원\n", age);
	if (age < 20)
		printf("나이 : %d, 최종요금 : 750원\n", age);

	return 0;
}