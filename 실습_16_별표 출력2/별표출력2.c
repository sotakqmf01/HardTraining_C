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
	// ���� ���鸸 tab���� �����Ѱ� ������ ������ �Ű澲�� ����
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
	// ������ ������ ä�� ��
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

	printf("�� ��¥�� ���̾Ƹ�带 �������?(Ȧ���� ����) ");
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


// C++ �ڵ�� �ۼ��� ���̾Ƹ��(�׳� ���ڸ� �Է��ϸ� �� ���� �´� ���̾Ƹ�� ����)
	//cout << "�Է��� ���� �´� ���̾Ƹ�带 ����մϴ� : ";
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

// �ڵ� 2���� for�� �ϳ����� ó���ϴ°Ű�
// �̰Ŵ� ������ ���� for�� 1�� + ������ �Ʒ��� for�� 1���� ó���� �ڵ�
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