#include <stdio.h>

int main(void)
{
	int x = 10;

	putchar('b');
	putchar('\n');
	//문자 상수를 ascii코드 문자 형식으로 출력
	printf("%c\n", 'a');
	printf("%c\n", 65);

	//문자 'a'의 ascii코드값을 10진수(%d)로 출력
	printf("%d\n", 'a');
	printf("%d\n", 'a' + 1);

	printf("x는 %d 입니다.\n\a", x);

	//char str[10] = { 72, 101, 108, 108, 111, 0 };

	//printf("%s\n", str);




	return 0;
}