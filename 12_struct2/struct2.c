#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct USERDATA
{
	int nAge;
	char szName[32];
	char szPhone[32];
} USERDATA;

// �̷��� �Ű������� ��ȯ���� ����ü�� �Ǹ� �� �߰��� �޸� ���簡 ��û �̷���� => ȿ���� ������ �ƴ�
USERDATA GetUserData(USERDATA param) {
	printf("%d��\t%s\t%s\n", param.nAge, param.szName, param.szPhone);

	USERDATA user = { 10, "Hoon", "010-9876-9876" };

	return user;
}

int main(void)
{
	USERDATA user = { 5, "Ho-sung", "010-1234-1234" };
	USERDATA result;

	result = GetUserData(user);

	printf("%d��\t%s\t%s\n", result.nAge, result.szName, result.szPhone);
	printf("%x", user);

	return 0;
}