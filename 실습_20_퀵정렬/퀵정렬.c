#include <stdio.h>

// https://akdl911215.tistory.com/386 참고 사이트

void QuickSort(int* aList, int start, int end) {
	if (start >= end) return;

	int pivot = start;
	int s = start + 1; // pivot 다음 요소부터 시작하기 위함
	int e = end;
	int tmp = 0;

	// 아무리 생각해도 s랑 e가 같을 때 반복문이 돌아갈 일이 없는거 같음
	// ▶아님 요소 2개 남았을 때에는 s랑 e가 같은데 이 때도 값을 비교해보고 정렬 해줘야함 아주 간단하게 {10, 9} 정렬해봤을 때 안됨
	while (s <= e) {
		while ((aList[pivot] >= aList[s]) && (s <= end))
			s++;
		while ((aList[pivot] <= aList[e]) && (e >= start + 1))
			e--;

		if (s < e) {
			tmp = aList[s];
			aList[s] = aList[e];
			aList[e] = tmp;
		}
		else {
			tmp = aList[e];
			aList[e] = aList[pivot];
			aList[pivot] = tmp;
		}
		for (int i = 0; i < 11; i++)
			printf("%d  ", aList[i]);
		putchar('\n');
	}
	// 요소 2개 남았을 때 정렬하는 방법 근데 그냥 첫 while 문에서 i와 j가 같을 때도 비교해서 정렬해주도록 만들면 필요 없음.
	/*if ((start + 1 == end) && aList[start] > aList[end]) {
		tmp = aList[end];
		aList[end] = aList[start];
		aList[start] = tmp;
	}*/
	//idx = e - 1;		// 이걸 while 문 안에 넣어 놓으면 요소2개 정렬을 위한 QuickSort를 호출할 때 while문이 돌지 않기 때문에 처음 초기화한 0값이 유지
						// 이 때문에 index 2 이후의 두번째 QuickSort(43줄 코드)의 매개변수가 이상하게 들어가 무한 루프를 돌게됨

	QuickSort(aList, start, e - 1);
	// e+1대신 그냥 s로 해도 됨, 같은 숫자일 때 넘어간 부분은 정렬된거라고 봐도 되기 때문에
	QuickSort(aList, s, end);

}

int main(void)
{
	int aList[11] = { 26, 5, 11, 1, 59, 11, 61, 15, 48, 20, 11 };
	//{ 10, 9 };
	//
	//{ 11,11,11,11,11,11,20,20,20,20,20 };
	//{ 60, 10, 5, 8, 7, 6, 4, 3, 2, 9, 9 };

	printf("정렬 전 : ");
	for (int i = 0; i < sizeof(aList)/sizeof(int); i++)
		printf("%d  ", aList[i]);
	printf("\n\n");

	QuickSort(aList, 0, sizeof(aList) / sizeof(int) -1);

	printf("\n");
	printf("정렬 후 : ");
	for (int i = 0; i < sizeof(aList)/sizeof(int); i++)
		printf("%d  ", aList[i]);
	putchar('\n');

	return 0;
}