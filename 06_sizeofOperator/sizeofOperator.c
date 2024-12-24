#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nData = 10;

	printf("%d, %d, %d\n", sizeof(5), sizeof(nData), sizeof(int));
	printf("%d, %d, %d\n", sizeof('A'), sizeof(char), sizeof("Hello"));		// ���� ����� ASCII�ڵ� ���� ���������� ó����
	printf("%d, %d\n", sizeof(123.45F), sizeof(123.45));

	printf("%d, %d\n", sizeof(nData + 10), sizeof(++nData));	// sizeof�����ڴ� ������ Ÿ�� �����ڶ� �ȿ� ������� �־ �۵����� ����.
	printf("%d\n", nData);

	int aList[16];
	printf("%lld\n", sizeof(aList));	// sizeof�� �ǿ����ڰ� 64��Ʈ �ý��ۿ����� ������ Ŭ �� �� �ֱ� ������ ���� ���ڸ� %lld�� ���
	printf("%lld\n", _countof(aList));

	return 0;
}