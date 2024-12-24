#include <windows.h>
#include <process.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

CRITICAL_SECTION g_cs;

char* g_pszMsg = 0;

// 1. thread에 Sleep이 없으면 왜 오류가 나는지 생각 해보기
// 2. 임계 구간을 Critical Section 객체로 동기화
void thread_set(void* pParam) {
	while (1) {
		EnterCriticalSection(&g_cs);
		if (g_pszMsg == 0) {
			g_pszMsg = (char*)malloc(sizeof(char) * 64);
			strcpy_s(g_pszMsg, 64, "Hello");
		}
		LeaveCriticalSection(&g_cs);
		Sleep(1);
	}
}

void thread_reset(void* pParam) {
	while (1) {
		EnterCriticalSection(&g_cs);
		if (g_pszMsg != 0) {
			free(g_pszMsg);
			g_pszMsg = 0;
		}
		LeaveCriticalSection(&g_cs);
		Sleep(1);
	}
}

int main(void) {
	InitializeCriticalSection(&g_cs);

	_beginthread(thread_set, 0, 0);
	_beginthread(thread_reset, 0, 0);

	while (_getch() != 'q') {
		EnterCriticalSection(&g_cs);
		if (g_pszMsg != 0)
			puts(g_pszMsg);
		else
			puts("empty");
		LeaveCriticalSection(&g_cs);
	}

	DeleteCriticalSection(&g_cs);
	return 0;
}