#include <stdio.h>

typedef struct IOBUF_TEST {	// �ܼ� I/O ���� ���� ����ü
	char* pCur;
	char* pBase;
	int bufSize;
} IOBUF_TEST;

void printf_iobuf(IOBUF_TEST* pBuf) {
	printf("Base : %p\n", pBuf->pBase);
	printf("Current : %p\n", pBuf->pCur);
	printf("Buffer size : %d\n", pBuf->bufSize);
	printf("Written size : %zd\n\n", pBuf->pCur - pBuf->pBase);
}

// �޸� �׷����鼭 �ѹ� �帧 ����
int main(void) {
	FILE* fp = NULL;
	fopen_s(&fp, "CON", "w");

	IOBUF_TEST* pIoBuf = (IOBUF_TEST*)fp;

	printf_iobuf((IOBUF_TEST*)fp);

	fputs("Hello", fp);
	printf_iobuf((IOBUF_TEST*)fp);
	fputs("World", fp);
	printf_iobuf((IOBUF_TEST*)fp);

	fclose(fp);
	return 0;
}