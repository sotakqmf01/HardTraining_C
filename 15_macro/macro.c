#include <stdio.h>

#define ADD(a,b) (a+b)

int Add(int a, int b){
	return a + b;
}

#define STRING(a) #a				// # : a를 문자'열'상수로 만들어 줌
#define PASTER(a, b) a##b			// ## : a 문자열과 b 문자열을 연결, 근데 문자열 상수가 아니라 소스코드 문자열로 바꿔줌

int main(void)
{
	// 1
	printf("%d\n", Add(3, 4));
	printf("%d\n", ADD(3, 4));


	int nData = 10;
	// 2
	printf("%d\n", PASTER(nDa, ta));	// PASTER(nDa, ta) = nData
	printf("%d\n", nData);
	printf("%s\n", STRING(nData));

	return 0;
}