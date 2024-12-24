#include <stdio.h>

int main(void)
{
	printf("%zd\n", sizeof(123.456F));
	printf("%zd\n", sizeof(123.456));

	printf("%f\n", 123.456F);

	printf("%f\n", 123.456);
	printf("%lf\n", 123.456);
	printf("%g\n", 123.456);
	printf("%.15lf\n", 3.14159265358979323846);

	printf("\n\n");

	double dData = 123.456;
	printf("%f, %f\n", dData, -123.456);

	// �Ҽ��� 2��° �ڸ����� �ݿø��ϰ� 1�ڸ����� ���
	printf("%.1f\n", dData);

	printf("%.2f\n", dData);
	printf("%.3f\n", dData);

	printf("%8d\n", 123);
	// [[�Ҽ����� ������]] 12�ڸ��� ���. ��, �Ҽ��� ���� 4��° �ڸ����� �ݿø��ϰ� 3�ڸ����� ���
	printf("%12.3f\n", dData);
	printf("%012.3f\n", dData);

	return 0;
}