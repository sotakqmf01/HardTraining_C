#include <stdio.h>

int main(void)
{
	int x = 10;

	putchar('b');
	putchar('\n');
	//���� ����� ascii�ڵ� ���� �������� ���
	printf("%c\n", 'a');
	printf("%c\n", 65);

	//���� 'a'�� ascii�ڵ尪�� 10����(%d)�� ���
	printf("%d\n", 'a');
	printf("%d\n", 'a' + 1);

	printf("x�� %d �Դϴ�.\n\a", x);

	//char str[10] = { 72, 101, 108, 108, 111, 0 };

	//printf("%s\n", str);




	return 0;
}