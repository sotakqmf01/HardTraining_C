#include <stdio.h>
#include <stdlib.h>

int getMax(int a, int b, int c)
{
	int max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	return max;
};

int main(void)
{
	int a = 0, b = 0, c = 0;
	printf("�� ���� �Է��ϼ���. : ");
	scanf_s("%d%d%d", &a, &b, &c);

	printf("�ִ� = %d\n", getMax(a, b, c));
	return 0;
}