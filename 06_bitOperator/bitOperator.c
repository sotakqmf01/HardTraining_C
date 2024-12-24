#include <stdio.h>

int main(void)
{
	int nData = 0x12345678;

	printf("%08X\n", nData);
	printf("%08X\n", ~nData);				// NOT			0x
	printf("%08X\n", nData & 0x00FFFF00);	// AND			0x
	printf("%08X\n", nData | 0x00FFFF00);	// OR			0x
	printf("%08X\n", nData ^ 0x00FFFF00);	// XOR			0x
	printf("%08X\n", nData >> 8);	// Shift Right			0x
	printf("%08X\n", nData << 8);	// Shift Left			0x

	char chData[32] = "Hello World";
	int nData2 = 4829034;

	return 0;
}