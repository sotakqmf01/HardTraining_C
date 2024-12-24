#include <stdio.h>

// 라이브러리에 이런게 있다는걸 알려주기 위한 코드
__declspec(dllexport) int add_in_dll(int, int);

int add_in_dll(int a, int b) {
	puts("add_in_dll v3.0");
	return a + b;
}