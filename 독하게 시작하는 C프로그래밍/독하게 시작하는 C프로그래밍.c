#include <stdio.h>

typedef struct ABC {
	int a;
	char name[32];
	char phone[32];
} ABC;

ABC Test(ABC user) {
	printf("나이 : %d, 이름 : %s, 번호 : %s\n", user.a, user.name, user.phone);
	return user;
}

ABC* Test2(ABC* user) {
	printf("나이 : %d, 이름 : %s, 번호 : %s\n", user->a, user->name, user->phone);
	return user;
}

int main(void) {

	ABC me = { 10, "jeong", "010-0000-0000" };

	Test(me);

	Test2(&me);

	return 0;
}