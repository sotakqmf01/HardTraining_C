#include <stdio.h>

int main(void)
{
	// scanf�� ���� ���ڸ� �Է¹ް� ���� enter�� ���ڷ� ���� ������ 
	// ���� �Է¿� ������ �� �� ���� �װ� �����ϱ� ���� %*c�� enter ���� ���ִ� ��
	int age = 0;
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d%*c", &age);

	//char ages[10] = { 0 };
	//printf("���̸� �Է��ϼ��� : ");
	//gets_s(ages, sizeof(ages));

	//// gets_s�� ���ڿ��� �޾ƿ��� �Լ� �̹Ƿ� int���� �޾ƿ����� �ϸ� ������ ��
	//int age =  0;
	//printf("���̸� �Է��ϼ��� : ");
	//gets_s(age, sizeof(age));

	char name[10] = { 0 };
	printf("�̸��� �Է��ϼ��� : ");
	gets_s(name, sizeof(name));

	printf("����� ���̴� %d���̰� �̸��� '%s'�Դϴ�.\n\n", age, name);
	//printf("����� ���̴� %s���̰� �̸��� '%s'�Դϴ�.\n\n", ages, name);

	char a[10] = { 0 };
	char b[10] = { 0 };
	gets_s(a, sizeof(a));
	gets_s(b, sizeof(b));
	//fgets(a, sizeof(a), stdin);
	//fgets(b, sizeof(b), stdin);

	printf("a = %d%s\n", 100, a);
	printf("b = %d%s\n", 100, b);
	// ����� �Է� �����Ŵ� �� �Ǵµ� �ѱ۷� �Է� ������ �� �ȵ�
	// ���ڿ��� �״�� ���°� ���� ������ �ȳ����� �Ǵµ� 
	// ���� �ϳ��� �� ���� ���� ������ ��������(a[0]=��, a[1]=�� �̷�������)
	// �̰� �̻��� ���̶� ����� �ȳ��� 
	printf("a = | %c | %c | %c |\n", a[0], a[1], a[2]);
	printf("b = | %c | %c | %c |\n", b[0], b[1], b[2]);

	return 0;
}