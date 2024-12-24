#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int score = 0;
	char grade = 0;

	scanf_s("%d", &score);

	if(score >= 80)
	{
		grade = 'B';
		if (score >= 90) 
			grade = 'A';
	}
	else
	{
		if (score >= 60)
		{
			grade = 'D';
			if (score >= 70)
				grade = 'C';
		}
		else
			grade = 'F';
	}

	printf("grade = %c\n", grade);

	return 0;
}