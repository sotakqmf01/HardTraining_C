#include <stdio.h>

typedef struct MYPARAMS {
	int nParam1;
	int nParam2;
	int nParam3;
} MYPARAMS;

int (*g_op_list[5])(MYPARAMS*);

int add(MYPARAMS *param) {
	return param->nParam1 + param->nParam2;
}
int sub(MYPARAMS* param) {
	return param->nParam1 - param->nParam2;
}
int mul(MYPARAMS* param) {
	return param->nParam1 * param->nParam2;
}
int div(MYPARAMS* param) {
	if (param->nParam2 == 0) {
		printf("divide 0 error\n");
		return 0;
	}
	return param->nParam1 / param->nParam2;
}

void init_op_list() {
	g_op_list[1] = add;
	g_op_list[2] = sub;
	g_op_list[3] = mul;
	g_op_list[4] = div;
}

int main(void) {
	init_op_list();
	int instructions[10] = { 0, 1, 2, 3, 4 };	// operation의 lookup 배열
	int pc = 0;									// 프로그램 카운터
	MYPARAMS param = { 4, 5, 6 };

	printf("1:add, 2:sub, 3:mul, 4:div\n");
	printf("operation : ");
	scanf_s("%d", &pc);
	printf("params : ");
	scanf_s("%d %d %d", &param.nParam1, &param.nParam2, &param.nParam3);

	int result = g_op_list[instructions[pc]](&param);
	printf("%d", result);

	return 0;
}