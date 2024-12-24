#include <stdio.h>

#pragma comment(lib, "..\\x64\\debug\\staticAdd.lib")
int add_in_lib(int, int);

// dll파일 로딩 코드는 lib에 들어가 있음 + dll파일 있어야 작동
#pragma comment(lib, "..\\x64\\debug\\dynamicAdd.lib")
__declspec(dllimport) int add_in_dll(int, int);

int add(int a, int b) {
	puts("add in .exe");
	return a + b;
}

int main(void) {
	add(3, 4);
	add_in_lib(3, 4);
	add_in_dll(3, 4);
	return 0;
}