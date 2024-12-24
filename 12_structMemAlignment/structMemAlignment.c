#include <stdio.h>

#pragma pack(push, 1) // 필요한 곳에만 전처리기를 사용해서 구조체 멤버 맞춤 값을 바꾸는게 좋음
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