#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//char ch = 0;
	//// scanf_s�� ���ڸ� �Է� ���� ���� �Է� ���� ũ�⸦ �� ������ ��� ��
	//scanf_s("%c%*c", &ch, 1);
	//printf("�Է��� ���ڴ� %c �Դϴ�.\n", ch);

	//char szBuffer[4] = { 0 };
	//// %4c : 4���� �Է� �ްڴ�
	//scanf_s("%4c", szBuffer, _countof(szBuffer));
	//printf("%c%c%c%c\n",
	//	szBuffer[0], szBuffer[1], szBuffer[2], szBuffer[3]);

	// -----------------------------------------------------------------
	//int x = 0, y = 0;

	//printf("�� ������ �Է��ϼ��� : ");
	//scanf_s("%d%d", &x, &y);

	//printf("�� ���� ���� : %d �Դϴ�.\n", x + y);

	//char ch = 0;

	//printf("������ ���ڸ� �Է��� �ּ��� : ");
	//scanf_s("%d%c", &x, &ch, 1);

	//printf("�Է��� ������ %d, ���ڴ� %c�Դϴ�.\n", x, ch);

	//// -------------------------------------------------------------------
	int i = 0;
	char c = '0';
	char sz[8] = { 0 };

	printf("%d\n\n", scanf_s("%d%*c", &i));					// ���� -> 1 | ����(��) -> 0
	printf("%d\n\n", scanf_s("%c%*c", &c, 1));				// ���� -> 1 - ASCII�ڵ� | ���ڿ� -> 1 - �Է¹��ۿ��� �ϳ��� ������
	printf("%d\n\n", scanf_s("%8c", sz, _countof(sz)));		// �̰� ���� 8���� �Է¹޴� �� ���ڿ��� �ƴ�

	//�� 1�� ���� �ٵ� �Է��� ����'��'�̹Ƿ� ���ڿ��� ���� null�� �ؾ��ϱ� ���� �� �ڸ��� ���ܾ� ��
	//�迭�� ũ�⸦ �ø����� 7���ڸ� ������ �ؾ� 1�� ��ȯ��
	printf("%d\n\n", scanf_s("%s", sz, _countof(sz)));

	return 0;

}