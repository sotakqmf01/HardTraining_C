#include <stdio.h>

typedef union IP_ADDR {
	int nAddress;
	short awData[2];
	unsigned char addr[4];
} IP_ADDR;

int main(void)
{
	IP_ADDR data = { 0 };
	data.nAddress = 0x41424344;			// ����� ��� ���� �� �����غ���

	printf("%c%c%c%c\n", data.addr[0], data.addr[1], data.addr[2], data.addr[3]);
	printf("%X, %d\n", data.awData[0], data.awData[0]);		// ��� ���� ��� Ʋ�� �� ���� �غ���
	printf("%X, %d\n", data.awData[1], data.awData[1]);

	return 0;
}