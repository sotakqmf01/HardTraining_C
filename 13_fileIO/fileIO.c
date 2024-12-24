#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main(void)
//{
//	FILE* fp = NULL;
//	char ch;
//	
//	fopen_s(&fp, "test.txt", "w");
//	fputs("test string!", fp);
//	fclose(fp);
//
//	fopen_s(&fp, "test.txt", "r");
//	if (fp == NULL)
//		return;
//
//	while ((ch = fgetc(fp)) != EOF)
//		putchar(ch);
//
//	return 0;
//}

int main(void)
{
	FILE* fp = NULL;
	char szBuffer[32] = { 0 };

	fopen_s(&fp, "Test.txt", "w");
	fputs("Test\n", fp);
	fputs("String\n", fp);
	fputs("Data\n", fp);
	fclose(fp);

	fopen_s(&fp, "Test.txt", "r");
	if (fp == NULL)
		return;

	while (fgets(szBuffer, sizeof(szBuffer), fp))
	{
		printf("%s", szBuffer);		
		//memset(szBuffer, 0, sizeof(szBuffer));
	}

	printf("szBuffer = %s\n", szBuffer);

	fclose(fp);
	return 0;
}

//int main(void) {
//	int nData = 0;
//	char szBuffer[128] = { 0 };
//	FILE* fp = NULL;
//
//	fopen_s(&fp, "fscanfTest.txt", "w");
//	//fprintf(fp, "%d,%s\n", 20, "Test");
//	fprintf(fp, "20, Test\n");
//	fclose(fp);
//
//	fopen_s(&fp, "fscanfTest.txt", "r");
//	fscanf_s(fp, "%d,%s", &nData, szBuffer, (unsigned)_countof(szBuffer));	// fscanf_s는 _countof(szBuffer) 부분이 인자로 필요함,
//	fclose(fp);
//
//	printf("%d, %s", nData, szBuffer);
//
//	return 0;
//}

//int main(void)
//{
//	FILE* fp = NULL;
//	fopen_s(&fp, "CON", "r");		// console파일
//	
//	char szBuffer[32] = { 0 };
//	fgets(szBuffer, sizeof(szBuffer), fp);
//	fputs(szBuffer, stdout);
//
//	fclose(fp);
//	return 0;
//}