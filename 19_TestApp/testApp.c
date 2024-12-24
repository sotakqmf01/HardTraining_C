#include <stdio.h>

#pragma comment(lib, "..\\x64\\debug\\staticAdd.lib")
int add_in_lib(int, int);

// dll���� �ε� �ڵ�� lib�� �� ���� + dll���� �־�� �۵�
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