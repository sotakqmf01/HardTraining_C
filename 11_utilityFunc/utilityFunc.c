#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
// atoi(), atol(), atof()
	char szbuffer[32];
	int nResult = 0;
	
	printf("Input string : ");
	gets_s(szbuffer, sizeof(szbuffer));

	nResult = atoi(szbuffer);
	printf("%d\n", nResult);

	printf("%d\n", atoi("2147483647"));
	printf("%d\n", atoi("2147483648"));	// int���� �ִ��� �Ѿ�� ���Ĵ� �ڸ��� �ִ����� ������
	printf("%e\n", atof("1.7e+308"));
	printf("%e\n", atof("1.7e+309"));	// ����ǥ�⵵ ��������
	printf("----------------------------------------\n");

// time(), localtime(), ctime()
	struct tm curtime = { 0 };
	time_t t = 0;				// time_t = 64bit�� unsigned int 

	t = time(NULL);				// time ��ȯ �� = 1970.1.1 00:00 ~ ������� �� �ʰ� �귶����
	localtime_s(&curtime, &t);	// t �ʸ� �ѱ� �ð����� �ٲ� ��
	printf("%11d\n", t);

	char szBuffer[128] = { 0 };
	ctime_s(szBuffer, sizeof(szBuffer), &t);
	printf("%s", szBuffer);

	printf("%04d-%02d-%02d\n", curtime.tm_year + 1900, curtime.tm_mon + 1, curtime.tm_mday);
	printf("----------------------------------------\n");

// srand(), rand()
	int i = 0;
	srand((unsigned)time(NULL)); // time = seed��(seed���� �����ϸ� �����Լ��� ��ȯ�س��� ��Ģ�� �Ȱ��� -> ���� ���� -> time���� �������� �ʰ� ����)

	for (i = 0; i < 10; i++)
		printf("%6d\n", rand());
	for (i = 0; i < 10; i++)
		printf("%6d\n", rand() % 10);
	printf("----------------------------------------\n");

// system(), exit()
	char szCommand[512] = { 0 };
	printf("Input command : ");
	gets_s(szCommand, sizeof(szCommand));

	system(szCommand);
	// system("notepad.exe");

	char ch;
	printf("do you want to EXIT? (Y/N)\n");
	ch = _getch();

	if (ch == 'y' || ch == 'Y')
	{
		puts("EXIT");
		exit(1);
	}
	puts("End of main()\n");

	return 0;
}

