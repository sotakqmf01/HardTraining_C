#include <stdio.h>

// ���̺귯���� �̷��� �ִٴ°� �˷��ֱ� ���� �ڵ�
__declspec(dllexport) int add_in_dll(int, int);

int add_in_dll(int a, int b) {
	puts("add_in_dll v3.0");
	return a + b;
}