#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;
	char* pszData = "01234567890123456789012345678901";
	fopen_s(&fp, "Test.dat", "wb");
	if (fp == NULL)
		return;
	fwrite(pszData, 32, 1, fp);

	fseek(fp, 5, SEEK_SET);

	fwrite("Hello", 5, 1, fp);	// 5~9±Ó¡ˆ overwrite«‘

	printf("pointer location of Test.dat : %u\n", ftell(fp));
	fclose(fp);
	return 0;
}