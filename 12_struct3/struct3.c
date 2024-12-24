#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//1
typedef struct MYBODY {
	int height;
	int weight;
} MYBODY;

typedef struct USERDATA {
	char name[32];
	char phone[32];
	MYBODY body;
} USERDATA;

//2 자기 참조 구조체 - 연결 리스트 자료구조이자 하나의 Node
typedef struct DATALIST {
	char name[32];
	char phone[32];
	struct DATALIST* pNext; // typedef로 DATALIST로 줄여 쓰긴하지만 처음 선언할 때는 선언이 안 된 상태니까 struct를 써줘야함
} DATALIST;

int main(void)
{
	// 1
	USERDATA user = { "jeong", "123", {181, 72} };

	printf("%s\t%s\t%d\t%d\n", user.name, user.phone, user.body.height, user.body.weight);

	// 2
	DATALIST user1 = { "kim", "1234", NULL };
	DATALIST user2 = { "lee", "4567", NULL };

	user1.pNext = &user2;
	printf("%s, %s\n", user1.name, user1.phone);
	printf("%s, %s\n", user1.pNext->name, user1.pNext->phone);

	return 0;
}