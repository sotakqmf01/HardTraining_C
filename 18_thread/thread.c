#include <windows.h>
#include <process.h>
#include <stdio.h>

int g_nData = 0;

void thread_main(void* pParam) {
	g_nData = 0;
	puts("begin - new thread");

	for (int i = 0; i < 100; i++)
		g_nData += 1;

	puts("end - new thread");
	return;
}

int main(void) {
	int nData = 0;
	puts("begin - main");
	// thread�� ���� �Լ��� ���� : void �Լ��̸�(void* pParam)
	_beginthread(thread_main, 0, 0);

	// for�� 100�� ���� �ð��� ��û ª�Ƽ� �����带 ����� �����ϰ� �����ϱ⿡ ������
	for (int i = 0; i < 200; i++)		
		nData += 1;

	printf("g_nData = %d\n", g_nData);
	puts("end - main");
	return 0;
}