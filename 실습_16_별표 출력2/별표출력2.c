#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
			printf("* ");
		printf("\n");
	}

	printf("\n\n");

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j <= i; ++j)
			printf("* ");
		printf("\n");
	}

	printf("\n\n");

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (j >= 4 - i)
				printf("* ");
			else
				printf("  ");
		}
		putchar('\n');
	}

	printf("\n\n");
	// 왼쪽 여백만 tab으로 조절한것 오른쪽 여백은 신경쓰지 않음
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5+i; ++j)
		{
			if (j >= 4 - i)
				printf("* ");
			else
				printf("  ");
		}
		putchar('\n');
	}

	printf("\n\n");

	int cnt2 = 4;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < cnt2; ++j)
			printf("  ");
		for (int k = 0; k < 9 - (cnt2 * 2); k++)
			printf("* ");
		for (int l = 0; l < cnt2; ++l)
			printf("  ");
		putchar('\n');
		cnt2--;
	}

	printf("\n\n");
	// 오른쪽 여백을 채운 것
	/*for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			if (j < 4 - i)
				printf("  ");
			else if (j > 4 + i)
				printf("  ");
			else
				printf("* ");
		}
		putchar('\n');
	}*/

	int n;

	printf("몇 층짜리 다이아몬드를 쌓을까요?(홀수만 가능) ");
	scanf_s("%d", &n, 1);

	for (int i = 0; i < n; i++) {
		if (i < n / 2 + 1) {
			for (int j = i; j < n / 2; j++)
				printf(" ");
			for (int j = 0; j < 2 * i + 1; j++)
				printf("*");
			printf("\n");
		}
		else {
			for (int j = 0; j < i - n / 2; j++)
				printf(" ");
			for (int j = 0; j < (n - i) * 2 - 1; j++)
				printf("*");
			printf("\n");
		}
	}


// C++ 코드로 작성한 다이아몬드(그냥 숫자를 입력하면 그 수에 맞는 다이아몬드 생성)
	//cout << "입력한 수에 맞는 다이아몬드를 출력합니다 : ";
	//cin >> n;

	//for (int i = 1; i <= 2 * n - 1; i++) {
	//	if (i <= n) {
	//		for (int j = 1; j <= n - i; j++) {
	//			cout << " ";
	//		}
	//		for (int j = 1; j <= 2 * i - 1; j++) {
	//			cout << "*";
	//		}
	//	}
	//	else {
	//		for (int j = 1; j <= i - n; j++) {
	//			cout << " ";
	//		}
	//		for (int j = (2 * n - i) * 2 - 1; j > 0; j--) {
	//			cout << "*";
	//		}
	//	}
	//	cout << endl;
	//}

// 코드 2개는 for문 하나에서 처리하는거고
// 이거는 마름모 위쪽 for문 1개 + 마름모 아래쪽 for문 1개로 처리한 코드
	//for (int i = 1; i <= n; i++) {
	//	for (int j = 1; j <= n - i; j++) {
	//		cout << " ";
	//	}
	//	for (int j = 1; j <= 2 * i - 1; j++) {
	//		cout << "*";
	//	}
	//	cout << endl;
	//}
	//for (int i = n - 1; i > 0; i--) {
	//	for (int j = 1; j <= n - i; j++) {
	//		cout << " ";
	//	}
	//	for (int j = 1; j <= 2 * i - 1; j++) {
	//		cout << "*";
	//	}
	//	cout << endl;
	//}

	return 0;
}