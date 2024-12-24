#include <stdio.h>

// https://akdl911215.tistory.com/386 ���� ����Ʈ

void QuickSort(int* aList, int start, int end) {
	if (start >= end) return;

	int pivot = start;
	int s = start + 1; // pivot ���� ��Һ��� �����ϱ� ����
	int e = end;
	int tmp = 0;

	// �ƹ��� �����ص� s�� e�� ���� �� �ݺ����� ���ư� ���� ���°� ����
	// ���ƴ� ��� 2�� ������ ������ s�� e�� ������ �� ���� ���� ���غ��� ���� ������� ���� �����ϰ� {10, 9} �����غ��� �� �ȵ�
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
	// ��� 2�� ������ �� �����ϴ� ��� �ٵ� �׳� ù while ������ i�� j�� ���� ���� ���ؼ� �������ֵ��� ����� �ʿ� ����.
	/*if ((start + 1 == end) && aList[start] > aList[end]) {
		tmp = aList[end];
		aList[end] = aList[start];
		aList[start] = tmp;
	}*/
	//idx = e - 1;		// �̰� while �� �ȿ� �־� ������ ���2�� ������ ���� QuickSort�� ȣ���� �� while���� ���� �ʱ� ������ ó�� �ʱ�ȭ�� 0���� ����
						// �� ������ index 2 ������ �ι�° QuickSort(43�� �ڵ�)�� �Ű������� �̻��ϰ� �� ���� ������ ���Ե�

	QuickSort(aList, start, e - 1);
	// e+1��� �׳� s�� �ص� ��, ���� ������ �� �Ѿ �κ��� ���ĵȰŶ�� ���� �Ǳ� ������
	QuickSort(aList, s, end);

}

int main(void)
{
	int aList[11] = { 26, 5, 11, 1, 59, 11, 61, 15, 48, 20, 11 };
	//{ 10, 9 };
	//
	//{ 11,11,11,11,11,11,20,20,20,20,20 };
	//{ 60, 10, 5, 8, 7, 6, 4, 3, 2, 9, 9 };

	printf("���� �� : ");
	for (int i = 0; i < sizeof(aList)/sizeof(int); i++)
		printf("%d  ", aList[i]);
	printf("\n\n");

	QuickSort(aList, 0, sizeof(aList) / sizeof(int) -1);

	printf("\n");
	printf("���� �� : ");
	for (int i = 0; i < sizeof(aList)/sizeof(int); i++)
		printf("%d  ", aList[i]);
	putchar('\n');

	return 0;
}