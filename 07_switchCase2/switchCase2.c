#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nInput = 0;
	char chCredit = 'X';

	printf("점수를 입력하세요. : ");
	scanf_s("%d", &nInput);

	switch (nInput / 10)
	{
	case 10:
	case 9:
		chCredit = 'A';
		break;
	case 8:
		chCredit = 'B';
		break;
	case 7:
		chCredit = 'C';
		break;
	case 6:
		chCredit = 'D';
		break;
	default:
		chCredit = 'F';
	}

	/*if ((nInput / 10) >= 9)
		chCredit = 'A';
	else if ((nInput / 10) == 8)
		chCredit = 'B';
	else if ((nInput / 10) == 7)
		chCredit = 'C';
	else if ((nInput / 10) == 6)
		chCredit = 'D';
	else
		chCredit = 'F';*/

	printf("학점 : %c\n", chCredit);

	return 0;
}

