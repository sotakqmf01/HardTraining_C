#include <stdio.h>

int* TestFunc(void) {
	int nData = 10;
	return &nData;
}

int* TestFunc2(void){
	int a = 5;
	return NULL;
}

int main(void)
{
	int* pnData = NULL;
	pnData = TestFunc();
	//TestFunc2();

	printf("%d\n", *pnData);		// TestFunc2 �ּ� Ǯ�� �� 5�� �������� �� �� �����غ���, ���ø޸� �׸��鼭 ���󰡴°͵� ����
	return 0;
}