#include <stdio.h>

int main(void)
{
	// scanf를 쓰면 숫자를 입력받고 다음 enter가 문자로 남기 때문에 
	// 다음 입력에 영향을 줄 수 있음 그걸 방지하기 위해 %*c로 enter 문자 빼주는 것
	int age = 0;
	printf("나이를 입력하세요 : ");
	scanf_s("%d%*c", &age);

	//char ages[10] = { 0 };
	//printf("나이를 입력하세요 : ");
	//gets_s(ages, sizeof(ages));

	//// gets_s는 문자열을 받아오는 함수 이므로 int형에 받아오려고 하면 오류가 남
	//int age =  0;
	//printf("나이를 입력하세요 : ");
	//gets_s(age, sizeof(age));

	char name[10] = { 0 };
	printf("이름을 입력하세요 : ");
	gets_s(name, sizeof(name));

	printf("당신의 나이는 %d살이고 이름은 '%s'입니다.\n\n", age, name);
	//printf("당신의 나이는 %s살이고 이름은 '%s'입니다.\n\n", ages, name);

	char a[10] = { 0 };
	char b[10] = { 0 };
	gets_s(a, sizeof(a));
	gets_s(b, sizeof(b));
	//fgets(a, sizeof(a), stdin);
	//fgets(b, sizeof(b), stdin);

	printf("a = %d%s\n", 100, a);
	printf("b = %d%s\n", 100, b);
	// 영어로 입력 받은거는 잘 되는데 한글로 입력 받은건 잘 안됨
	// 문자열을 그대로 쓰는건 자음 모음을 안나눠도 되는데 
	// 문자 하나씩 볼 때는 자음 모음이 나눠져서(a[0]=ㄱ, a[1]=ㅏ 이런식으로)
	// 이게 이상한 값이라 제대로 안나옴 
	printf("a = | %c | %c | %c |\n", a[0], a[1], a[2]);
	printf("b = | %c | %c | %c |\n", b[0], b[1], b[2]);

	return 0;
}