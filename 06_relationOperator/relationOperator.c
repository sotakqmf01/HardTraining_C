#include <stdio.h>

int main(void)
{
	int x = 5, y = 10;
	
	printf("%d\n", x == y);
	printf("%d\n", x != y);
	printf("%d\n", x > 5);
	printf("%d\n", y < 5);
	printf("%d\n", y >= 10);
	printf("%d\n", y <= x + 5);

	printf("\n\n");

	// �Ǽ��� ���� ���/�ε� �񱳴� ���ϴ°� ����.
	printf("%d\n", 300 == 299.99999F);		// 
	printf("%d\n", 300 == 299.99999);		//
	printf("%d\n", 300 == 299.9999F);		// 
	printf("%d\n", 300 == 300.00001F);		// 

	return 0;
}