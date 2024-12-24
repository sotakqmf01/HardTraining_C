#include <stdio.h>

// 1
#define _MSGTEST_

#ifdef _MSGTEST_
#define MYMESSAGE "I am a boy"
#else
#define MYMESSAGE "You are a girl"
#endif

// 2
#define MYUNICODE

#ifdef MYUNICODE
	typedef wchar_t TCHAR;
	#define _T(string) L##string
	#define PRINT wprintf
#else
	typedef char TCHAR;
	#define _T(string) string
	#define PRINT printf
#endif

int main(void)
{
	// 1
	puts(MYMESSAGE);

	// 2
	TCHAR szData[16] = _T("Test String");
	PRINT(_T("%s\n"), szData);
	PRINT(_T("%zd, %zd\n"), sizeof(TCHAR), sizeof(szData));

	return 0;
}