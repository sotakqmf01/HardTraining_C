#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;
	fopen_s(&fp, "Test.txt", "r+");
	if (fp == NULL)
	{
		puts("ERROR : Failed to open file!");
		return;
	}

	//fprintf(fp, "%s\n", "Hello World");
	fprintf(fp, "%s\n", "World");

	fclose(fp);
	return 0;
}