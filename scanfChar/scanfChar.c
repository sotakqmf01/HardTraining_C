#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//char ch = 0;
	//// scanf_s로 문자를 입력 받을 때는 입력 받을 크기를 꼭 지정해 줘야 함
	//scanf_s("%c%*c", &ch, 1);
	//printf("입력한 문자는 %c 입니다.\n", ch);

	//char szBuffer[4] = { 0 };
	//// %4c : 4글자 입력 받겠다
	//scanf_s("%4c", szBuffer, _countof(szBuffer));
	//printf("%c%c%c%c\n",
	//	szBuffer[0], szBuffer[1], szBuffer[2], szBuffer[3]);

	// -----------------------------------------------------------------
	//int x = 0, y = 0;

	//printf("두 정수를 입력하세요 : ");
	//scanf_s("%d%d", &x, &y);

	//printf("두 수의 합은 : %d 입니다.\n", x + y);

	//char ch = 0;

	//printf("정수와 문자를 입력해 주세요 : ");
	//scanf_s("%d%c", &x, &ch, 1);

	//printf("입력한 정수는 %d, 문자는 %c입니다.\n", x, ch);

	//// -------------------------------------------------------------------
	int i = 0;
	char c = '0';
	char sz[8] = { 0 };

	printf("%d\n\n", scanf_s("%d%*c", &i));					// 숫자 -> 1 | 문자(열) -> 0
	printf("%d\n\n", scanf_s("%c%*c", &c, 1));				// 숫자 -> 1 - ASCII코드 | 문자열 -> 1 - 입력버퍼에서 하나만 가져옴
	printf("%d\n\n", scanf_s("%8c", sz, _countof(sz)));		// 이건 문자 8개를 입력받는 것 문자열이 아님

	//다 1로 나옴 근데 입력이 문자'열'이므로 문자열의 끝을 null로 해야하기 위한 한 자리를 남겨야 함
	//배열의 크기를 늘리던지 7글자만 쓰던지 해야 1을 반환함
	printf("%d\n\n", scanf_s("%s", sz, _countof(sz)));

	return 0;

}