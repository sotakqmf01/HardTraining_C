#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, result = 0;

	scanf_s("%d%d", &a, &b);

	result = a + (~b + 1);

	//result & 0x00000001 ��Ʈ �����ڷ� Ȧ�� ¦�� �����ϴ� ���

	printf("���:%d\n", result);

	return 0;

}