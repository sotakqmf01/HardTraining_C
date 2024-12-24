#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char szPath[128] = { "C:\\Program Files\\" };

	strcat_s(szPath, sizeof(szPath), "CHS\\");
	strcat_s(szPath, sizeof(szPath), "C programming");
	puts(szPath);

	strcpy_s(szPath, sizeof(szPath), "C:\\Program Files\\");
	//strcat_s대신 strcpy_s를 써도 잘 나옴. 왜냐? 내가 write를 시작할 메모리 주소를 알려줬기 때문에
	strcpy_s(szPath + 17, sizeof(szPath) - 17, "CHS\\");				// -17 은 앞에서 17만큼 썼으니까 남은 111바이트까지만 더 쓸 수 있다는 것
	strcpy_s(szPath + 17 + 4, sizeof(szPath) - 21, "C programming");

	//strcat(szPath + strlen("C:\\Program Files\\"), "CHS\\");
	//strcat(szPath + strlen("C:\\Program Fiels\\CHS\\"), "C programming");

	puts(szPath);

	return 0;
}