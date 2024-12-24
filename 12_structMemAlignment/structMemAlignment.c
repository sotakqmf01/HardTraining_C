#include <stdio.h>

#pragma pack(push, 1) // �ʿ��� ������ ��ó���⸦ ����ؼ� ����ü ��� ���� ���� �ٲٴ°� ����
typedef struct USERDATA {
	char ch;
	int age;
	char name[5];
} USERDATA;
#pragma pack(pop)

typedef struct USERDATA2 {
	char ch;
	int age;
	char name[5];
} USERDATA2;

int main(void) 
{
	USERDATA user = { 'A', 10, "kim"};
	USERDATA2 user2 = { 'B', 11, "park" };
	int data = 0x11223344;
	printf("%zd\n", sizeof(USERDATA));
	printf("%zd\n", sizeof(USERDATA2));
	return 0;
}