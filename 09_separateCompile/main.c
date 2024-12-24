#include <stdio.h>
#include "func.h"		// 내가 만든 헤더파일은 꺽세말고 쌍따옴표

//int add(int, int);	// 헤더파일에 넣어놓으면 선언할 필요 없음

extern int g_input;		// 외부 파일 전역변수 가져올 때 extern 붙여야함

int main(void)
{
	printf("%d\n", add(2, 3));
	printf("main() : %d\n", g_input);
	printInput();

	return 0;
}