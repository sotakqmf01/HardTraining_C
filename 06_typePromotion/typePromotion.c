#include <stdio.h>

int main(void)
{
	char ch = 'A';

	printf("%c\n", ch);

	printf("%c\n", ch + 1);
	printf("%d\n", ch + 1);
	printf("%c\n", 'A' + 2);

	printf("%d\n", 5 + 2);
	printf("%d\n", 5.0 + 2); // �Ǽ� ���� ���������� ǥ�� �� ��
	
	double age = 2.0;

	printf("age = %d\n", age);

	return 0;
}