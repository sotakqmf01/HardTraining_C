#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pList = NULL;

	pList = (int*)malloc(sizeof(int) * 3);

	pList[0] = 10;
	pList[1] = 20;
	pList[2] = 30;
	//pList[3] = 40;
	//pList[3] = 0xFDFDFDFD; // ���� canary bit�� �־��ָ� ���� ���� �����

	for (int i = 0; i < 4; i++)
		printf("%d\n", pList[i]);

	free(pList); // �Ҵ� ���� �޸𸮺��� �� �ᵵ �������� ����Ǵٰ� �װ� ��ȯ�� �� ������ ��. �����ؾ���

	return 0;
}