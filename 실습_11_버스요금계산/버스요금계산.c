#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int age = 0;

	scanf_s("%d", &age);
	if(age>=20)
		printf("���� : 20, ������� : 1000��\n", age);
	if(age<20)
		printf("���� : %d, ������� : 750��\n", age);

	scanf_s("%d", &age);
	if (age >= 20)
		printf("���� : 20, ������� : 1000��\n", age);
	if (age < 20)
		printf("���� : %d, ������� : 750��\n", age);

	return 0;
}