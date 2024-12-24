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

	// while(1)�ϰ� while�� �ȿ��� �Է� �������� �ϸ� printf���� ���� 2�� ����
	// while�� ���� �� main thread���� �̺�Ʈ ó���ϴ� �� ���� ���� 2�� ������ �� ����
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

	// event�� ���� ���� g_q_front�� �������� ��.
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
		// �� �ڵ忡�� Sleep�� �� �ʿ��Ѱ� �ƴѰ� ����
		Sleep(1);
	}
	return 0;
}