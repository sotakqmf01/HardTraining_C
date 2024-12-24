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
	// thread로 돌릴 함수의 형식 : void 함수이름(void* pParam)
	_beginthread(thread_main, 0, 0);

	// for문 100번 도는 시간이 엄청 짧아서 쓰레드를 만들고 시작하고 종료하기에 부족함
	for (int i = 0; i < 200; i++)		
		nData += 1;

	printf("g_nData = %d\n", g_nData);
	puts("end - main");
	return 0;
}