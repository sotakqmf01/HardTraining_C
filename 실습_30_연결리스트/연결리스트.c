#include <stdio.h>

typedef struct USERDATA {
	char name[32];
	char phone[32];
	struct USERDATA* pNext;
}USERDATA;

void PrintList(USERDATA* param) {
	printf("[%p]\tname = %s\tnum : %s\tpNext : %p\n", param, param->name, param->phone, param->pNext);
	if (param->pNext == NULL)
		return;
	PrintList(param->pNext);
}

int main(void)
{
	USERDATA userList[4] = {
		{"kim", "123", NULL},
		{"lee", "234", NULL},
		{"seok", "3456", NULL},
		{"jang", "5677", NULL}
	};

	for (int i = 0; i < 3; i++) 
		userList[i].pNext = &userList[i + 1];

	PrintList(userList);
	putchar('\n');

	return 0;
}