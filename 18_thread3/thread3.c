#include <stdio.h>
#include <Windows.h>
#include <process.h>
#include <stdlib.h>
#include <conio.h>

char g_queue[100] = { 0 };
int g_q_rear = 0, g_q_front = 0;

void file_copy_start(void) {
	g_queue[g_q_rear] = 'x';
	g_q_rear++;
}

void file_copy_end(void) {
	g_queue[g_q_rear] = 'y';
	g_q_rear++;
}

void file_IO(void* pParam) {
	file_copy_start();
	Sleep(4000);
	file_copy_end();
}

void user_event(void* pParam){
	char event = 0;
	puts("user input thread - begin");

	// while(1)하고 while문 안에서 입력 받으려고 하면 printf문이 거의 2번 나옴
	// while문 도는 게 main thread에서 이벤트 처리하는 것 보다 빨라서 2번 나오는 거 같음
	while (event = _getch()) {
		printf("user input event : %c\n", event);
		g_queue[g_q_rear] = event;
		g_q_rear++;
		if (event == 'q')
			break;
	}
	puts("user input thread - end");
}

char dispatch_event(void) {
	char event = g_queue[g_q_front];

	// event가 있을 때만 g_q_front가 움직여야 함.
	if(event != 0)
		g_q_front++;
	return event;
}

void eventA_handler(void) {
	puts("event A : Complete");
}
void eventB_handler(void) {
	puts("event B : Complete");
}
void eventC_handler(void) {
	puts("event C : Complete");
	_beginthread(file_IO, 0, 0);
}

int main(void) {
	char event = 0;
	_beginthread(user_event, 0, 0);
	
	while ((event = dispatch_event()) != 'q')
	{
		switch (event) {
		case 'a':
			eventA_handler();
			break;
		case 'b':
			eventB_handler();
			break;
		case 'c':
			eventC_handler();
			break;
		case 'x':
			puts("file copy start");
			break;
		case 'y':
			puts("file copy end");
			break;
		}
		// 이 코드에서 Sleep이 꼭 필요한건 아닌거 같음
		Sleep(1);
	}
	return 0;
}