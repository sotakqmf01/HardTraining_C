#include <stdio.h>

#define ADD(a,b) (a+b)

int Add(int a, int b){
	return a + b;
}

#define STRING(a) #a				// # : a�� ����'��'����� ����� ��
#define PASTER(a, b) a##b			// ## : a ���ڿ��� b ���ڿ��� ����, �ٵ� ���ڿ� ����� �ƴ϶� �ҽ��ڵ� ���ڿ��� �ٲ���

int main(void)
{
	// 1
	printf("%d\n", Add(3, 4));
	printf("%d\n", ADD(3, 4));


	int nData = 10;
	// 2
	printf("%d\n", PASTER(nDa, ta));	// PASTER(nDa, ta) = nData
	printf("%d\n", nData);
	printf("%s\n", STRING(nData));

	return 0;
}