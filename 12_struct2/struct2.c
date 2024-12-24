#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct USERDATA
{
	int nAge;
	char szName[32];
	char szPhone[32];
} USERDATA;

// 이렇게 매개변수랑 반환값이 구조체가 되면 그 중간에 메모리 복사가 엄청 이루어짐 => 효율이 좋은건 아님
USERDATA GetUserData(USERDATA param) {
	printf("%d살\t%s\t%s\n", param.nAge, param.szName, param.szPhone);

	USERDATA user = { 10, "Hoon", "010-9876-9876" };

	return user;
}

int main(void)
{
	USERDATA user = { 5, "Ho-sung", "010-1234-1234" };
	USERDATA result;

	result = GetUserData(user);

	printf("%d살\t%s\t%s\n", result.nAge, result.szName, result.szPhone);
	printf("%x", user);

	return 0;
}