#include <stdio.h>

int main(void)
{
	int Data = 10;
	int Data2 = 20;
	
	const int* pData = &Data;
	*pData = 20;	// �޸� ������ �ٲ� �� ����.
	pData = &Data2;
	*pData = 30;
	
	int* const pData2 = &Data;
	pData2 = NULL;	// �޸� �ּҸ� �ٲ� �� ����.
	*pData2 = 15;

	return 0;
}