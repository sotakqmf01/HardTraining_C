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
	//pList[3] = 0xFDFDFDFD; // 직접 canary bit를 넣어주면 문제 없이 실행됨

	for (int i = 0; i < 4; i++)
		printf("%d\n", pList[i]);

	free(pList); // 할당 받은 메모리보다 더 써도 문제없이 실행되다가 그걸 반환할 때 오류가 뜸. 조심해야함

	return 0;
}