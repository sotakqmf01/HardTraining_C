#include <stdio.h>

typedef enum ACTION { MOVE=1, JUMP, ATTACK, QUIT } ACTION;

ACTION GetInputFromClient() {
	ACTION act = 0;
	int a = 0;
	printf("[1] MOVE\t[2] JUMP\t [3] ATTACK\t [4]QUIT\n");
	scanf_s("%d", &act);

	return act;
}

int DoMove(int nParam) {
	puts("DoMove");
	return 0;
}

int DoJump(int nParam) {
	puts("DoJump");
	return 0;
}

int DoAttack(int nParam) {
	puts("DoAttack");
	return 0;
}

int main(void)
{
	int (*functionArray[3])(int) = { DoMove, DoJump, DoAttack };

	ACTION act = 0;
	/*while ((act = GetInputFromClient()) != QUIT)
	{
		switch (act) {
		case MOVE:
			functionArray[MOVE](0);
			break;
		case JUMP:
			functionArray[JUMP](0);
			break;
		case ATTACK:
			functionArray[ATTACK](0);
			break;
		default:
			break;
		}
	}*/
	
	int i = 0;
	while ((act = GetInputFromClient()) != QUIT) {
		functionArray[act-1](0);
		i++;
		printf("È½¼ö : %d\n\n", i);

		if (i == 10)
			break;
	}
	return 0;
}