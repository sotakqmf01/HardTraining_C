#include <stdio.h>

int GetMax(int a, int b, int c) {
	int nMax = a;
	if (nMax < b) nMax = b;
	if (nMax < c) nMax = c;
	return nMax;
}

int main(void)
{
	int (*pfGetMax)(int, int, int) = 0x0000000140011366;	// ���� ���� ������ �ȸ´ٰ� warning �ߴµ� ������ ����ȯ ���ָ� �ȶ�

	printf("GetMax�Լ��� �ּ� : %p\n", GetMax);
	printf("max : %d\n", pfGetMax(1, 3, 2));
	printf("max : %d\n", GetMax(1, 3, 2));
	return 0;
}

// alt+F7 -> ��Ŀ -> ��� -> ���� ���� �ּ� (��->�ƴϿ��� �ٲٸ� �Լ��� �ּҰ� ������)
// 0000000140011366