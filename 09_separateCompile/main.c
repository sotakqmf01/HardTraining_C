#include <stdio.h>
#include "func.h"		// ���� ���� ��������� �������� �ֵ���ǥ

//int add(int, int);	// ������Ͽ� �־������ ������ �ʿ� ����

extern int g_input;		// �ܺ� ���� �������� ������ �� extern �ٿ�����

int main(void)
{
	printf("%d\n", add(2, 3));
	printf("main() : %d\n", g_input);
	printInput();

	return 0;
}