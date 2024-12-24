#include <stdio.h>

int g_input = 10;		// 전역 변수

int add(int a, int b)
{
	return a + b;
}

int printInput(void)
{
	printf("printInput() : %d\n", g_input);
	return 0;
}