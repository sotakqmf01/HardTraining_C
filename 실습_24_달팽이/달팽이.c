#include <stdio.h>

int main(void)
{
	int aList[6][6] = { 0 };
	int cnt = 0;
	int start = 0, end = (sizeof(aList) / sizeof(aList[0]))-1;	// �ݺ��� �ɼ��� ä������ �迭�� �پ��� ������ �̿� �����ϱ� ���� ����
	int flagRnC = 1, flagFillDirect = 1;						// flagRnC : '��'�� �������� '��'�� ���������� ����, flagFillDirect : '��'�������� ä���� '��'�������� ä���� ����

	for (int k = 0; k < (sizeof(aList) / sizeof(aList[0])); k++)	// flag�� ���� ��Ʈ�� �迭 ũ�⸸ŭ �ݺ��ؾߵ�
	{
		for (int i = 0; i < 2; i++)	// �ѹ� ���̴°� ��Ʈ�� ������,  ��(11��,01��)��Ʈ : ���������� �ִ� ��Ʈ, ��(10��,00��)��Ʈ : ���������� �ִ� ��Ʈ
		{
			if (flagRnC == 1)	// '��' ����
			{
				for (int j = start; j <= end; j++)
				{
					if (flagFillDirect == 1)	// '��'�������� ä���
						aList[start][j] = ++cnt;													//11 ��(��) ������Ű�� ��(��) '��'���� ä���
					else {						// '��'�������� ä���
						if (j != start)	// �̹� ä���� �κ��� �׳� �Ѿ�� ����
							aList[end][(sizeof(aList) / sizeof(aList[0]))-1 -  j] = ++cnt;			//10 ��(��) ������Ű�� ��(��) '��'���� ä���
					}
				}
				flagRnC = !flagRnC; // ���� �ݺ��� ��Ʈ�� �����ִ� ���� ������ �ϱ� ���� (11��01) / (10��00)
			}
			else{				// '��' ����
				for (int j = start ; j <= end; j++)
				{
					if (flagFillDirect == 1)
					{
						if (j != start)
							aList[j][end] = ++cnt;													//01 ��(��) ������Ű�� ��(��) '��'���� ä���
					}
					else {
						if (j != start && j != end)	// 00�� ���� �迭�� ���۰� ���� �̹� �տ��� ä������ ������ �Ѿ
							aList[(sizeof(aList) / sizeof(aList[0]))-1 - j][start] = ++cnt;			//00 ��(��) ������Ű�� ��(��) '��'���� ä���
					}
				}
				flagRnC = !flagRnC;
			}
		}
		// ���⼭ start, end���� ���ؾ���
		if (k % 2 == 1) {	// �� ��Ʈ�� ������ �迭�� �ѹ����� ä�������ϱ� ���۰� ���� �� ĭ�� ���ܾ� ��
			start++;
			end--;
		}

		flagFillDirect = !flagFillDirect;	// ���� ��Ʈ�� �ϱ� ���� ��Ʈ�� ���� ���� 2�� �ݺ��Ǵ� �ݺ���(���� i)�� �������� ���� �ٲ���
	}

	for (int i = 0; i < (sizeof(aList) / sizeof(aList[0])); i++)
	{
		for (int j = 0; j < (sizeof(aList) / sizeof(aList[0])); j++)
		{
			printf("%2d  ", aList[i][j]);
		}
		putchar('\n');
	}

	return 0;
}