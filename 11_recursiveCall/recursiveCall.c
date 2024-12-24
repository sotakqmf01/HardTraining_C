#include <stdio.h>
#include <stdlib.h>

int GetFactorial(int param) {
	int result = 0;

	if (param == 1) return 1;

	result = param * GetFactorial(param - 1);
	return result;
}

void PutData(char* pszParam) {
	if (*pszParam == '\0') return;

	putchar(*pszParam);
	PutData(pszParam + 1);
}

int main(void)
{
	int result = 0;
	result = GetFactorial(5);

	printf("5! == %d\n", result);

	PutData("TestData");
	putchar('\n');

	return 0;
}