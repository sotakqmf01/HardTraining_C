#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1
typedef struct USERDATA{
	int nAge;
	char szName[32];
	char szPhone[32];
} USERDATA;

// 3 struct2.c에 이렇게 안 쓰는 이유가 있음
USERDATA GetUserData(void){
	USERDATA user = { 0 };
	scanf_s("%d%*c", &user.nAge);
	gets_s(user.szName, sizeof(user.szName));
	gets_s(user.szPhone, sizeof(user.szPhone));

	return user;
}

// 4 이렇게 call by reference로 쓰는게 좋다.
void GetUserData2(USERDATA* pUser) {
	scanf_s("%d%*c", &pUser->nAge);
	gets_s(pUser->szName, sizeof(pUser->szName));
	gets_s(pUser->szPhone, sizeof(pUser->szPhone));

	return;
}

int main(void)
{
	// 1
	USERDATA user = { 0, "", "" };

	user.nAge = 10;
	strcpy_s(user.szName, sizeof(user.szName), "Hoon");
	strcpy_s(user.szPhone, sizeof(user.szPhone), "010-1234-1234");
	printf("%d살, %s, %s\n", user.nAge, user.szName, user.szPhone);

	// 2 동적 할당
	USERDATA* pUser = NULL;
	pUser = (USERDATA*)malloc(sizeof(USERDATA));

	pUser->nAge = 15;
	strcpy_s(pUser->szName, sizeof(pUser->szName), "Tan");
	strcpy_s(pUser->szPhone, sizeof(pUser->szPhone), "010-1234-1234");
	printf("%d살, %s, %s\n", pUser->nAge, pUser->szName, pUser->szPhone);

	free(pUser);

	// 4 함수 호출
	USERDATA user2 = { 0 };

	GetUserData2(&user2);
	printf("%d살, %s, %s\n", user2.nAge, user2.szName, user2.szPhone);

	// practice 동적 할당 + 함수 호출
	USERDATA* pUser2 = NULL;
	pUser2 = (USERDATA*)malloc(sizeof(USERDATA));

	GetUserData2(pUser2);
	printf("%d살, %s, %s\n", pUser->nAge, pUser->szName, pUser->szPhone);

	free(pUser2);

	return 0;
}