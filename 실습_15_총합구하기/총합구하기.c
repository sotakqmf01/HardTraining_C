#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 1, wtotal = 0, ftotal = 0;

	while (i < 11)
	{
		wtotal += i;
		i++;
	}
	printf("wTotal : %d\n", wtotal);

	for (int j = 1; j <= 10; j++)
	{
		ftotal += j;
	}
	printf("fTotal : %d\n", ftotal);

	return 0;
}