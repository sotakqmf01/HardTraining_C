#include <stdio.h>

int main(void)
{
	int x = 5;

	printf("%lf\n", (double)x);			// double
	printf("%d\n", 5 / 2);				// int/int -> int
	printf("%lf\n", 5.0 / 2);            // double/int -> double
	printf("%lf\n", 5 / 2.0);			// int/double -> double
	printf("%lf\n", (double)5 / 2);		// double/int -> double
	printf("%lf\n", (double)x / 2);		// double/int -> double
	printf("%lf\n", x/(double)2);		// int/double -> double
	printf("%lf\n", (double)(x / 2));	// double

	return 0;

}